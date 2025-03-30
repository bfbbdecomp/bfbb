#include <types.h>

#include "xAnim.h"
#include "xVec3.h"
#include "xEvent.h"
#include "xCamera.h"
#include "xMath3.h"

#include "zEnt.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zNPCSndTable.h"
#include "zNPCTypeBossSandy.h"

extern const char bossSandyStrings[];

#define Unknown 1
#define Idle01 2
#define Idle02 3
#define Taunt01 4
#define Run01 5
#define Walk01 6
#define Melee01 7
#define Hit01 8
#define Hit02 9
#define GetUp01 10
#define Dizzy01 11
#define ElbowDrop01 12
#define Leap01 13
#define Leap02 14
#define Leap03 15
#define Leap04 16
#define Sit01 17
#define SitShock01 18
#define CLBegin01 19
#define CLLoop01 20
#define CLEnd01 21
#define NoHeadIdle01 22
#define NoHeadWaving01 23
#define NoHeadGetUp01 24
#define NoHeadShotUp01 25
#define NoHeadShock01 26
#define NoHeadReplace01 27
#define NoHeadHit01 28

extern F32 __830; // 0.0   0
extern F32 __831; // 1.0   3f800000
extern F32 __842; // 0.20000000298023224   3e4ccccd
extern F32 _843; // 3.3333332538604736   40555555
extern F32 _864; // 0.25   3e800000
extern F32 _1029; // 6.2831854820251465   40c90fdb
extern F32 _1030; // 0.0625   3d800000
extern F32 _1031; // 255.0   437f0000
extern F32 _1032; // 0.5   3f000000
extern F32 _1033; // -1.0   bf800000
extern F32 _1034; // 20.0   41a00000
extern F32 _1035; // 10.0   41200000
extern F32 _1036; // 1000000000.0   4e6e6b28
extern F32 _1037; // 2.25   40100000
extern F32 _1039; // 176.0   43300000
extern F32 _1061_1; // 6.0   40c00000
extern F32 _1062_1; // 1.2999999523162842   3fa66666
extern F32 _1063; // 2.0   40000000
extern F32 _1064; // 3.0   40400000
extern F32 _1065; // 8.199999809265137   41033333
extern F32 _1066; // 4.0   40800000
extern F32 _1067; // 4.5   40900000
extern F32 _1068; // 0.15000000596046448   3e19999a
extern F32 _1069; // -0.4000000059604645   becccccd
extern F32 _1070; // 9.699999809265137   411b3333
extern F32 _1071; // 7.0   40e00000
extern F32 _1072; // 5.0   40a00000
extern F32 _1188_1; // -0.30000001192092896   be99999a
extern F32 _1189; // 1.25   3fa00000
extern F32 _1190; // 0.035999998450279236   3d1374bc
extern F32 _1191; // 0.10999999940395355   3de147ae
extern F32 _1192_1; // 0.10000000149011612   3dcccccd
extern F32 _1193; // -10.0   c1200000
extern F32 _1194; // 6.041999816894531   40c15810
extern F32 _1195; // 0.125   3e000000
extern F32 _1196; // 100.0   42c80000
extern F32 _1209; // 9.999999747378752e-06   3727c5ac
extern F32 _1378; // 478.0   43ef0000
extern F32 _1379; // 0.6000000238418579   3f19999a
extern F32 _1380; // 0.8999999761581421   3f666666
extern F32 _1381; // 1.100000023841858   3f8ccccd
extern F32 _1462; // 9.0   41100000
extern F32 _1463; // 0.30000001192092896   3e99999a
extern F32 _1464; // 0.699999988079071   3f333333
extern F32 _1465; // 3.1415927410125732   40490fdb
extern F32 _1466; // 0.75   3f400000
extern F32 _1521; // 0.800000011920929   3f4ccccd
extern F32 _1522; // -0.800000011920929   bf4ccccd
extern F32 _1523; // -2.0   c0000000
extern F32 _1524; // 66.0   42840000
extern F32 _1525; // -2500.0   c51c4000
extern F32 _1526_0; // -1.5   bfc00000
extern F32 _1527; // 13.0   41500000
extern F32 _1528; // 3.5   40600000
extern F32 _1529; // -2.5   c0200000
extern F32 _1530; // 25.0   41c80000
extern F32 _1531; // 15.0   41700000
extern F32 _1666; // 0.4000000059604645   3ecccccd
extern F32 _1667; // -3.1415927410125732   c0490fdb
extern F32 _1935; // 60.0   42700000
extern F32 _1936; // 0.9900000095367432   3f7d70a4
extern F32 _1937; // 0.009999999776482582   3c23d70a
extern F32 _1938; // 2.950000047683716   403ccccd
extern F32 _1939; // 15.5   41780000
extern F32 _1940; // 1.5   3fc00000
extern F32 _1941; // 40.0   42200000
extern F32 _1942; // 0.8100000023841858   3f4f5c29
extern F32 _2154; // 30.0   41f00000
extern F32 _2155; // -9.999999747378752e-06   b727c5ac
extern F32 _2156; // 2.309999942779541   4013d70a
extern F32 _2173; // 12.0   41400000
extern F32 _2236; // 0.7070000171661377   3f34fdf4
extern F32 _2237; // 2.5   40200000
extern F32 _2264; // 1.7000000476837158   3fd9999a
extern F32 _2265; // 0.7699999809265137   3f451eb8
extern F32 _2376; // 0.9800000190734863   3f7ae148
extern F32 _2377; // 0.019999999552965164   3ca3d70a
extern F32 _2517; // 1.1549999713897705   3f93d70a
extern F32 _2518; // 80.0   42a00000
extern F32 _2519; // 31.0   41f80000
extern F32 _2520; // 42.0   42280000
extern F32 _2525; // 0.6499999761581421   3f266666
extern F32 _2582; // -3.0   c0400000
extern F32 _2633; // 5.25   40a80000
extern F32 _2741; // 0.0010000000474974513   3a83126f
extern F32 _2742; // 4.71238899230957   4096cbe4
extern F32 _2818; // 1.75   3fe00000
extern F32 _2903; // 0.05000000074505806   3d4ccccd
extern F32 _2904; // -0.05000000074505806   bd4ccccd

extern zGlobals globals;

extern zNPCBSandy* sSandyPtr;
extern U32 sCurrNFSound;

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

xAnimTable* ZNPC_AnimTable_BossSandy()
{
    // clang-format off
    S32 ourAnims[28] = {
        Unknown,
        Idle01, 
        Idle02, 
        Taunt01, 
        Run01, 
        Walk01, 
        Melee01, 
        Hit01, 
        Hit02, 
        GetUp01,
        Dizzy01, 
        ElbowDrop01, 
        Leap01, 
        Leap02, 
        Leap03 ,
        Leap04, 
        Sit01, 
        SitShock01,
        CLBegin01, 
        CLLoop01, 
        CLEnd01,
        NoHeadIdle01,
        NoHeadWaving01, 
        NoHeadGetUp01,
        NoHeadShotUp01, 
        NoHeadShock01,
        NoHeadReplace01, 
        NoHeadHit01,
    };
    // clang-format on

    //Missing like 2 logic lines or something, too tired to figure it out
    xAnimTable* table = xAnimTableNew("zNPCBSandy", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[Unknown], 0x10, 0x40, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Idle02], 0x10, 0x40, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Taunt01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Run01], 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Walk01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Dizzy01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ElbowDrop01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap02], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap03], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap04], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Sit01], 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Hit02], 0x10, 0, __831, NULL, NULL, __830, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[SitShock01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLBegin01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLLoop01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLEnd01], 0x10, 0, __831, NULL, NULL, __830, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadIdle01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadWaving01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadGetUp01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadShotUp01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadShock01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadReplace01], 0x10, 0, __831, NULL, NULL, __830,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, __842);

    return table;
}

U32 HeadIsCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.carry.grabbed == sSandyPtr->headBoulder;
}

U32 HeadNotCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return !(globals.player.carry.grabbed == sSandyPtr->headBoulder);
}

U32 HeadIsShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return sSandyPtr->bossFlags & 0x100;
}

U32 HeadNotShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return !(sSandyPtr->bossFlags & 0x100);
}

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
                            __830, 0, 0, _864, NULL);
    xAnimTableNewTransition(table, str_Carried01, str_Idle01, HeadNotCarried, NULL, 0, 0, __830,
                            __830, 0, 0, _864, NULL);
    xAnimTableNewTransition(table, str_Idle01, str_Shocked01, HeadIsShocked, NULL, 0, 0, __830,
                            __830, 0, 0, _864, NULL);
    xAnimTableNewTransition(table, str_Shocked01, str_Idle01, HeadNotShocked, NULL, 0, 0, __830,
                            __830, 0, 0, _864, NULL);

    return table;
}

void zNPCBSandy::ParseINI()
{
    zNPCCommon::ParseINI();

    this->cfg_npc->snd_traxShare = NULL;
    this->cfg_npc->snd_trax = g_sndTrax_BossSandy;

    NPCS_SndTablePrepare(g_sndTrax_BossSandy);
}

void zNPCBSandy_BossDamageEffect_Init()
{
    for (S32 i = 0; i < 4; i++)
    {
        BDErecord[i].BDEminst = NULL;
    }
}

static void GetBonePos(xVec3* result, xMat4x3* matArray, S32 index, xVec3* offset)
{
    xMat4x3 tmpMat;

    if (index == 0)
    {
        xMat3x3RMulVec(result, matArray, offset);
        xVec3AddTo(result, &matArray->pos);
    }
    else
    {
        xMat4x3Mul(&tmpMat, &matArray[index], matArray);

        if (offset)
        {
            xMat3x3RMulVec(result, &tmpMat, offset);
            xVec3AddTo(result, &tmpMat.pos);
        }
        else
        {
            xVec3Copy(result, &tmpMat.pos);
        }
    }
}

void zNPCBSandy::hiddenByCutscene()
{
    for (S32 i = 0; i < 3; i++)
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

S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*)
{
    zNPCGoalBossSandyIdle* idle = (zNPCGoalBossSandyIdle*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)idle->psyche->clt_owner;
    S32 nextgoal = 0;
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

    F32 length = xVec3Length2(&tempVector);

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

S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyTaunt* taunt = (zNPCGoalBossSandyTaunt*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)taunt->psyche->clt_owner;
    S32 nextgoal = 0;
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

    F32 length = xVec3Length2(&tempVector);

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

S32 noHeadCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyNoHead* noHead = (zNPCGoalBossSandyNoHead*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)noHead->psyche->clt_owner;
    S32 nextgoal = 0;

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

S32 elbowDropCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyElbowDrop* edrop = (zNPCGoalBossSandyElbowDrop*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)edrop->psyche->clt_owner;
    S32 nextgoal = 0;
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

    F32 length = xVec3Length2(&tempVector);

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

S32 leapCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyLeap* leap = (zNPCGoalBossSandyLeap*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)leap->psyche->clt_owner;
    S32 nextgoal = 0;

    if (leap->stage == 3)
    {
        if (sandy->AnimTimeRemain(NULL) < _2264 * dt) // 1.7
        {
            if (sandy->bossFlags & 2)
            {
                *trantype = GOAL_TRAN_SET;
                nextgoal = 'NGB9';
            }
            else
            {
                *trantype = GOAL_TRAN_SET;
                nextgoal = 'NGB8';
            }
        }
    }

    return nextgoal;
}

void xBinaryCamera::add_tweaks(char const*)
{
}

void xBinaryCamera::set_targets(xVec3 const& par_1, xVec3 const& par_2, F32 par_3)
{
    this->s1 = (xVec3*)(&par_1);
    this->s2 = (xVec3*)(&par_2);
    this->s2_radius = par_3;
}

S32 zNPCGoalBossSandyLeap::Name()
{
    return 0;
}
