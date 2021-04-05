#include <types.h>

#include "../Core/x/xAnim.h"
#include "../Core/x/xVec3.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xCamera.h"
#include "../Core/x/xMath3.h"

#include "zEnt.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zNPCSndTable.h"
#include "zNPCTypeBossSandy.h"

extern const char bossSandyStrings[];

extern float32 __830; // 0.0   0
extern float32 __831; // 1.0   3f800000
extern float32 __842; // 0.20000000298023224   3e4ccccd
extern float32 _843; // 3.3333332538604736   40555555
extern float32 _864; // 0.25   3e800000
extern float32 _1029; // 6.2831854820251465   40c90fdb
extern float32 _1030; // 0.0625   3d800000
extern float32 _1031; // 255.0   437f0000
extern float32 _1032; // 0.5   3f000000
extern float32 _1033; // -1.0   bf800000
extern float32 _1034; // 20.0   41a00000
extern float32 _1035; // 10.0   41200000
extern float32 _1036; // 1000000000.0   4e6e6b28
extern float32 _1037; // 2.25   40100000
extern float32 _1039; // 176.0   43300000
extern float32 _1061_1; // 6.0   40c00000
extern float32 _1062_1; // 1.2999999523162842   3fa66666
extern float32 _1063; // 2.0   40000000
extern float32 _1064; // 3.0   40400000
extern float32 _1065; // 8.199999809265137   41033333
extern float32 _1066; // 4.0   40800000
extern float32 _1067; // 4.5   40900000
extern float32 _1068; // 0.15000000596046448   3e19999a
extern float32 _1069; // -0.4000000059604645   becccccd
extern float32 _1070; // 9.699999809265137   411b3333
extern float32 _1071; // 7.0   40e00000
extern float32 _1072; // 5.0   40a00000
extern float32 _1188_1; // -0.30000001192092896   be99999a
extern float32 _1189; // 1.25   3fa00000
extern float32 _1190; // 0.035999998450279236   3d1374bc
extern float32 _1191; // 0.10999999940395355   3de147ae
extern float32 _1192_1; // 0.10000000149011612   3dcccccd
extern float32 _1193; // -10.0   c1200000
extern float32 _1194; // 6.041999816894531   40c15810
extern float32 _1195; // 0.125   3e000000
extern float32 _1196; // 100.0   42c80000
extern float32 _1209; // 9.999999747378752e-06   3727c5ac
extern float32 _1378; // 478.0   43ef0000
extern float32 _1379; // 0.6000000238418579   3f19999a
extern float32 _1380; // 0.8999999761581421   3f666666
extern float32 _1381; // 1.100000023841858   3f8ccccd
extern float32 _1462; // 9.0   41100000
extern float32 _1463; // 0.30000001192092896   3e99999a
extern float32 _1464; // 0.699999988079071   3f333333
extern float32 _1465; // 3.1415927410125732   40490fdb
extern float32 _1466; // 0.75   3f400000
extern float32 _1521; // 0.800000011920929   3f4ccccd
extern float32 _1522; // -0.800000011920929   bf4ccccd
extern float32 _1523; // -2.0   c0000000
extern float32 _1524; // 66.0   42840000
extern float32 _1525; // -2500.0   c51c4000
extern float32 _1526; // -1.5   bfc00000
extern float32 _1527; // 13.0   41500000
extern float32 _1528; // 3.5   40600000
extern float32 _1529; // -2.5   c0200000
extern float32 _1530; // 25.0   41c80000
extern float32 _1531; // 15.0   41700000
extern float32 _1666; // 0.4000000059604645   3ecccccd
extern float32 _1667; // -3.1415927410125732   c0490fdb
extern float32 _1935; // 60.0   42700000
extern float32 _1936; // 0.9900000095367432   3f7d70a4
extern float32 _1937; // 0.009999999776482582   3c23d70a
extern float32 _1938; // 2.950000047683716   403ccccd
extern float32 _1939; // 15.5   41780000
extern float32 _1940; // 1.5   3fc00000
extern float32 _1941; // 40.0   42200000
extern float32 _1942; // 0.8100000023841858   3f4f5c29
extern float32 _2154; // 30.0   41f00000
extern float32 _2155; // -9.999999747378752e-06   b727c5ac
extern float32 _2156; // 2.309999942779541   4013d70a
extern float32 _2173; // 12.0   41400000
extern float32 _2236; // 0.7070000171661377   3f34fdf4
extern float32 _2237; // 2.5   40200000
extern float32 _2264; // 1.7000000476837158   3fd9999a
extern float32 _2265; // 0.7699999809265137   3f451eb8
extern float32 _2376; // 0.9800000190734863   3f7ae148
extern float32 _2377; // 0.019999999552965164   3ca3d70a
extern float32 _2517; // 1.1549999713897705   3f93d70a
extern float32 _2518; // 80.0   42a00000
extern float32 _2519; // 31.0   41f80000
extern float32 _2520; // 42.0   42280000
extern float32 _2525; // 0.6499999761581421   3f266666
extern float32 _2582; // -3.0   c0400000
extern float32 _2633; // 5.25   40a80000
extern float32 _2741; // 0.0010000000474974513   3a83126f
extern float32 _2742; // 4.71238899230957   4096cbe4
extern float32 _2818; // 1.75   3fe00000
extern float32 _2903; // 0.05000000074505806   3d4ccccd
extern float32 _2904; // -0.05000000074505806   bd4ccccd

extern zGlobals globals;

extern zNPCBSandy* sSandyPtr;
extern uint32 sCurrNFSound;

extern NPCSndTrax g_sndTrax_BossSandy[1];

extern BossDamageEffectRecord BDErecord[4];

void on_change_newsfish(const tweak_info& tweak)
{
    sSandyPtr->newsfish->SpeakStart(sCurrNFSound, 0, -1);
}

void on_change_shockwave(const tweak_info& tweak)
{
    sSandyPtr->bossFlags |= 0x800;

    xVec3Copy((xVec3*)(&sSandyPtr->shockwaveEmitter->tasset->pos),
              (xVec3*)(&sSandyPtr->model->Mat->pos));

    sSandyPtr->shockwaveEmitter->tasset->pos.y = __830;
    sSandyPtr->shockRadius = __831;
}

// func_8013D100
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandy__Fv")

uint32 HeadIsCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.carry.grabbed == sSandyPtr->headBoulder;
}

uint32 HeadNotCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return !(globals.player.carry.grabbed == sSandyPtr->headBoulder);
}

uint32 HeadIsShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return sSandyPtr->bossFlags & 0x100;
}

uint32 HeadNotShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return !(sSandyPtr->bossFlags & 0x100);
}

// func_8013D8F4
#if 1
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandyHead__Fv")
#else

#define str_SandyBossHead (bossSandyStrings + 0xff)
#define str_Idle01 (bossSandyStrings + 0x10d)
#define str_Carried01 (bossSandyStrings + 0x114)
#define str_Shocked01 (bossSandyStrings + 0x11e)

xAnimTable* ZNPC_AnimTable_BossSandyHead()
{
    xAnimTable* table;

    table = xAnimTableNew(str_SandyBossHead, NULL, 0);

    xAnimTableNewState(table, str_Idle01, 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, str_Carried01, 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, str_Shocked01, 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(table, str_Idle01, str_Carried01, HeadIsCarried, NULL, 0, 0, __830,
                            __830, 0, 0, __864, NULL);
    xAnimTableNewTransition(table, str_Carried01, str_Idle01, HeadNotCarried, NULL, 0, 0, __830,
                            __830, 0, 0, __864, NULL);
    xAnimTableNewTransition(table, str_Idle01, str_Shocked01, HeadIsShocked, NULL, 0, 0, __830,
                            __830, 0, 0, __864, NULL);
    xAnimTableNewTransition(table, str_Shocked01, str_Idle01, HeadNotShocked, NULL, 0, 0, __830,
                            __830, 0, 0, __864, NULL);

    return table;
}
#endif

// func_8013DB38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "ZNPC_AnimTable_BossSandyScoreboard__Fv")

// func_8013DCA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Init__10zNPCBSandyFP9xEntAsset")

// func_8013E418
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Setup__10zNPCBSandyFv")

// func_8013E5EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "SelfSetup__10zNPCBSandyFv")

// func_8013E830
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Reset__10zNPCBSandyFv")

void zNPCBSandy::ParseINI()
{
    zNPCCommon::ParseINI();

    this->cfg_npc->snd_traxShare = NULL;
    this->cfg_npc->snd_trax = g_sndTrax_BossSandy;

    NPCS_SndTablePrepare(g_sndTrax_BossSandy);
}

// func_8013F1F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "AnimPick__10zNPCBSandyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8013F36C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "SpringRender__FP15SandyLimbSpring")

void zNPCBSandy_BossDamageEffect_Init()
{
    for (int32 i = 0; i < 4; i++)
    {
        BDErecord[i].BDEminst = NULL;
    }
}

// func_8013F6D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi")

// func_8013F87C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_BossDamageEffect_Update__Ff")

// func_8013F9BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Render__10zNPCBSandyFv")

// func_8013FCA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "CalcMagnetizeInfo__10zNPCBSandyFv")

// func_8013FD68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "InitFX__10zNPCBSandyFv")

// func_80140150
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateFX__10zNPCBSandyFf")

// func_8014032C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "UpdateSandyBossCam__FP10zNPCBSandyf")

// func_801404CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "GetBonePos__FP5xVec3P7xMat4x3iP5xVec3")

// func_80140574
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "MakeOBBFor__FiiP4xEntP7xMat4x3")

// func_801406F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8014075C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Process__10zNPCBSandyFP6xScenef")

void zNPCBSandy::hiddenByCutscene()
{
    for (int32 i = 0; i < 3; i++)
    {
        this->underwear[i]->state = (this->underwear[i]->state & 0xffffffc0) | 1;
        zEntEvent(this->underwear[i], eEventCollision_Visible_On);
        this->underwear[i]->timer = __830; // 0.0
    }

    switch (this->round)
    {
    case 1:
    {
        this->hangingScoreboard->chkby &= 0xef;
        this->hangingScoreboard->flags |= 1;
        this->bustedScoreboard->chkby &= 0xef;
        this->bustedScoreboard->flags &= 0xfe;
        this->crashedScoreboard->chkby &= 0xef;
        this->crashedScoreboard->flags &= 0xfe;

        this->ropeObjectLo[4] = this->ropeSb;

        xEntHide(this->ropeSbDamaged);
        xEntShow(this->ropeSb);

        gCurrentPlayer = eCurrentPlayerSpongeBob;

        zLightningShow(this->wireLight[0], 0);
        zLightningShow(this->wireLight[1], 0);

        break;
    }
    case 2:
    {
        this->crashedScoreboard->chkby |= 0x10;
        this->crashedScoreboard->flags |= 1;
        this->hangingScoreboard->chkby &= 0xef;
        this->hangingScoreboard->flags &= 0xfe;
        this->bustedScoreboard->chkby &= 0xef;
        this->bustedScoreboard->flags &= 0xfe;

        this->ropeObjectLo[4] = this->ropeSbDamaged;

        xEntHide(this->ropeSb);
        xEntShow(this->ropeSbDamaged);

        zLightningShow(this->wireLight[0], 1);
        zLightningShow(this->wireLight[1], 1);

        gCurrentPlayer = eCurrentPlayerPatrick;

        break;
    }
    case 3:
    {
        gCurrentPlayer = eCurrentPlayerSpongeBob;
        break;
    }
    }
}

void zNPCBSandy::Damage(en_NPC_DAMAGE_TYPE damtype, xBase*, const xVec3*)
{
    if (damtype == DMGTYP_INSTAKILL)
    {
        this->bossFlags |= 0x100;
    }
}

// func_80141864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "zNPCBSandy_AddBoundEntsToGrid__FP6zScene")

void zNPCBSandy_GameIsPaused(zScene*)
{
    if (sSandyPtr)
    {
        if (sSandyPtr->bossFlags & 0x400)
        {
            sSandyPtr->bossFlags &= ~0x400; // clear bit
            sSandyPtr->hiddenByCutscene();
        }
    }
}

// func_801419D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "NewTime__10zNPCBSandyFP6xScenef")

int32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, float32, void*)
{
    zNPCGoalBossSandyIdle* idle = (zNPCGoalBossSandyIdle*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)idle->psyche->clt_owner;
    int32 nextgoal = 0;
    xVec3 tempVector;

    if (sandy->bossFlags & 0x400)
    {
        return 0;
    }

    if (globals.player.ControlOff)
    {
        return 0;
    }

    if (sandy->hitPoints == 0)
    {
        return 0;
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = __830; // 0.0

    float32 length = xVec3Length2(&tempVector);

    if (idle->timeInGoal > _1463) // 0.3
    {
        if (length > _2173) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
    }

    return nextgoal;
}

int32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, float32 dt, void*)
{
    zNPCGoalBossSandyTaunt* taunt = (zNPCGoalBossSandyTaunt*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)taunt->psyche->clt_owner;
    int32 nextgoal = 0;
    xVec3 tempVector;

    if (taunt->timeInGoal > _1463) // 0.3
    {
        if (sandy->bossFlags & 0x400)
        {
            *trantype = GOAL_TRAN_SET;
            return 'NGB1';
        }
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = __830; // 0.0

    float32 length = xVec3Length2(&tempVector);

    if (sandy->AnimTimeRemain(NULL) < _1381 * dt) // 1.1
    {
        if (globals.player.ControlOff)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
        else if (length > _2173) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
    }

    return nextgoal;
}

// func_8014239C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "chaseCB__FP5xGoalPvP11en_trantypefPv")

// func_80142660
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "meleeCB__FP5xGoalPvP11en_trantypefPv")

int32 noHeadCB(xGoal* rawgoal, void*, en_trantype* trantype, float32 dt, void*)
{
    zNPCGoalBossSandyNoHead* noHead = (zNPCGoalBossSandyNoHead*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)noHead->psyche->clt_owner;
    int32 nextgoal = 0;

    if (noHead->stage == 4 || noHead->stage == 5)
    {
        if (sandy->AnimTimeRemain(NULL) < _2264 * dt) // 1.7
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
    }

    return nextgoal;
}

int32 elbowDropCB(xGoal* rawgoal, void*, en_trantype* trantype, float32 dt, void*)
{
    zNPCGoalBossSandyElbowDrop* edrop = (zNPCGoalBossSandyElbowDrop*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)edrop->psyche->clt_owner;
    int32 nextgoal = 0;
    xVec3 tempVector;

    if (edrop->timeInGoal > _1463) // 0.3
    {
        if (sandy->bossFlags & 0x400)
        {
            *trantype = GOAL_TRAN_SET;
            return 'NGB1';
        }
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = __830; // 0.0

    float32 length = xVec3Length2(&tempVector);

    if (sandy->AnimTimeRemain(NULL) < _2264 * dt) // 1.7
    {
        if (globals.player.ControlOff)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
        else if (sandy->bossFlags & 2)
        {
            sandy->bossFlags &= ~2; // clear bit 2
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB2';
        }
        else if (length < _2173) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
    }

    return nextgoal;
}

// func_80142AA0
#if 1
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "leapCB__FP5xGoalPvP11en_trantypefPv")
#else
int32 leapCB(xGoal* rawgoal, void*, en_trantype* trantype, float32 dt, void*)
{
    int32 newgoal = 0;
    return newgoal;
}
#endif

// func_80142B54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "sitCB__FP5xGoalPvP11en_trantypefPv")

// func_80142C64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "getUpCB__FP5xGoalPvP11en_trantypefPv")

// func_80142DE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "runToRopeCB__FP5xGoalPvP11en_trantypefPv")

// func_80142ED8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "clotheslineCB__FP5xGoalPvP11en_trantypefPv")

// func_80142FDC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__21zNPCGoalBossSandyIdleFfPv")

// func_80143090
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__21zNPCGoalBossSandyIdleFP11en_trantypefPvP6xScene")

// func_801431E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__21zNPCGoalBossSandyIdleFfPv")

// func_80143238
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyTauntFfPv")

// func_801432F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyTauntFP11en_trantypefPvP6xScene")

// func_8014340C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyChaseFfPv")

// func_80143468
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyChaseFP11en_trantypefPvP6xScene")

// func_801435A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__22zNPCGoalBossSandyChaseFfPv")

// func_801435F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyMeleeFfPv")

// func_80143718
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__22zNPCGoalBossSandyMeleeFfPv")

// func_80143798
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyMeleeFP11en_trantypefPvP6xScene")

// func_8014393C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__23zNPCGoalBossSandyNoHeadFfPv")

// func_80143A04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__23zNPCGoalBossSandyNoHeadFP11en_trantypefPvP6xScene")

// func_80144378
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__26zNPCGoalBossSandyElbowDropFfPv")

// func_801444BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__26zNPCGoalBossSandyElbowDropFP11en_trantypefPvP6xScene")

// func_80144754
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__26zNPCGoalBossSandyElbowDropFfPv")

// func_8014478C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__21zNPCGoalBossSandyLeapFfPv")

// func_801449A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__21zNPCGoalBossSandyLeapFP11en_trantypefPvP6xScene")

// func_80144E20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__21zNPCGoalBossSandyLeapFfPv")

// func_80144E48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__20zNPCGoalBossSandySitFfPv")

// func_80144F58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__20zNPCGoalBossSandySitFP11en_trantypefPvP6xScene")

// func_80145698
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__20zNPCGoalBossSandySitFfPv")

// func_80145704
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__22zNPCGoalBossSandyGetUpFfPv")

// func_8014583C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__22zNPCGoalBossSandyGetUpFP11en_trantypefPvP6xScene")

// func_80145868
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__26zNPCGoalBossSandyRunToRopeFfPv")

// func_80145AB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__26zNPCGoalBossSandyRunToRopeFP11en_trantypefPvP6xScene")

// func_80145BE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Exit__26zNPCGoalBossSandyRunToRopeFfPv")

// func_80145C10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s", "Enter__28zNPCGoalBossSandyClotheslineFfPv")

// func_80145D90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSandy.s",                                                 \
                   "Process__28zNPCGoalBossSandyClotheslineFP11en_trantypefPvP6xScene")

void xBinaryCamera::add_tweaks(char const*)
{
}

void xBinaryCamera::set_targets(xVec3 const& par_1, xVec3 const& par_2, float32 par_3)
{
    this->s1 = (xVec3*)(&par_1);
    this->s2 = (xVec3*)(&par_2);
    this->s2_radius = par_3;
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

int32 zNPCGoalBossSandyLeap::Name()
{
    return 0;
}