#include "zNPCTypePrawn.h"

#include "xDebug.h"

#include <types.h>

#define f1052 1.0f
#define f1053 0.0f
#define f1454 0.2f
#define f1455 0.1f

#define ANIM_Unknown 0 // 0x0
#define ANIM_Idle01 1 // 0x04
#define ANIM_Idle02 2 // 0x08       animtable new state
#define ANIM_Idle03 3 // 0xC
#define ANIM_Fidget01 4 //
#define ANIM_Fidget02 5
#define ANIM_Fidget03 6
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Attack01 8 //0x20
#define ANIM_Damage01 9 //0x24
#define ANIM_Damage02 10 //0x28
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_SpawnKids01 15 //0x3C
#define ANIM_Attack02Windup01 16
#define ANIM_Attack02Loop01 17
#define ANIM_Attack02End01 18
#define ANIM_LassoGrab01 19

namespace
{
    sound_data_type sound_data[4];
    U32 sound_asset_ids[6][4];

    struct tweak_group
    {
        F32 turn_accel;
        F32 spawn_delay;
        F32 repel_radius;
        struct
        {
            range_type pattern;
        } safe;
        struct
        {
            range_type pattern;
            F32 state_delay; // 0x1c
            F32 transition_delay;
        } begin;
        struct
        {
            F32 delay[3];
            range_type pattern;
            F32 state_delay;
            F32 transition_delay;
            F32 exhaust_vel;
            F32 knock_back;
            struct
            {
                S32 amount[3];
                F32 arc;
                F32 delay;
                F32 accel;
                F32 max_vel;
            } sweep;
            fire_type fire;
        } beam;
        _class_7 aim_lane;
        _class_14 lane;
        _class_25 danger;
        sound_property sound[4];
        void* context;
        tweak_callback cb_sound;
        tweak_callback cb_sound_asset;

        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize);
    }; // namespace tweak_group
} // namespace

/*

TODO: 42%, needs quite a bit of work still.
Thought this function was going to be an easy copy/paste like other register_tweak fn,
but turning out to be harder to decipher than I anticipated so leaving it like this for now.
*/
void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize)
{
    if (init)
    {
        this->sound[0].volume = 0;
        auto_tweak::load_param<F32, F32>(this->sound[0].volume, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODO1");
    }

    if (init)
    {
        this->sound[0].range_inner = 0;
        auto_tweak::load_param<F32, F32>(this->sound[0].range_inner, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODO2");
    }
    if (init)
    {
        this->sound[0].range_outer = 0;
        auto_tweak::load_param<F32, F32>(this->sound[0].range_outer, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODO3");
    }

    if (init)
    {
        this->sound[0].delay = 0;
        auto_tweak::load_param<F32, F32>(this->sound[0].delay, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODO4");
    }
    if (init)
    {
        this->sound[1].volume = 0;
        auto_tweak::load_param<F32, F32>(this->sound[1].volume, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODo5");
    }
    if (init)
    {
        this->sound[1].range_inner = 0;
        auto_tweak::load_param<F32, F32>(this->sound[1].range_inner, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "TODo6");
    }

    if (init)
    {
        this->sound[1].range_outer = 0;
        auto_tweak::load_param<F32, F32>(this->sound[1].range_outer, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo7");
    }
    if (init)
    {
        this->sound[1].delay = 0;
        auto_tweak::load_param<F32, F32>(this->sound[1].delay, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo8");
    }
    if (init)
    {
        this->sound[2].volume = 0;
        auto_tweak::load_param<F32, F32>(this->sound[2].volume, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo9");
    }
    if (init)
    {
        this->sound[2].range_inner = 0;
        auto_tweak::load_param<F32, F32>(this->sound[2].range_inner, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo10");
    }

    if (init)
    {
        this->sound[2].range_outer = 0;
        auto_tweak::load_param<F32, F32>(this->sound[2].range_outer, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo11");
    }
    if (init)
    {
        this->sound[2].delay = 0;
        auto_tweak::load_param<F32, F32>(this->sound[2].delay, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo12");
    }
    if (init)
    {
        this->sound[3].volume = 0;
        auto_tweak::load_param<F32, F32>(this->sound[3].volume, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo13");
    }
    if (init)
    {
        this->sound[3].range_inner = 0;
        auto_tweak::load_param<F32, F32>(this->sound[3].range_inner, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo14");
    }

    if (init)
    {
        this->sound[3].range_outer = 0;
        auto_tweak::load_param<F32, F32>(this->sound[3].range_outer, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo15");
    }
    if (init)
    {
        this->sound[3].delay = 0;
        auto_tweak::load_param<F32, F32>(this->sound[3].delay, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo16");
    }

    if (init)
    {
        this->sound[3].delay = 0;
        auto_tweak::load_param<F32, F32>(this->sound[3].delay, 1.0f, 0.0, 1.0f, ap, apsize,
                                         "todo17");
    }

    if (init)
    {
        sound_data[0].volume = sound[0].volume;
        sound_data[0].id = sound_asset_ids[0][0] = xStrHash("TES1");
    }
    if (init)
    {
        sound_data[1].volume = sound[1].volume;
        sound_data[1].id = sound_asset_ids[0][1] = xStrHash("TES2");
    }
    if (init)
    {
        sound_data[2].volume = sound[2].volume;
        sound_data[2].id = sound_asset_ids[0][2] = xStrHash("TES3");
    }
    if (init)
    {
        sound_data[3].volume = sound[3].volume;
        sound_data[3].id = sound_asset_ids[0][3] = xStrHash("TES4");
    }

    /*
        *(undefined4 *)(param_1 + 0x1ac) = sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@;
    sound_data__27@unnamed@zNPCTypePrawn_cpp@ =
         xStrHash__FPCc((&PTR_@stringBase0_8026e83c)[*(int *)(param_1 + 0x1ac) * 4]);
    *(undefined4 *)(param_1 + 0x1c4) = DAT_80329548;
    DAT_803295b0 = xStrHash__FPCc((&PTR_@stringBase0_8026e83c)[*(int *)(param_1 + 0x1c4) * 4]);
    *(undefined4 *)(param_1 + 0x1dc) = DAT_80329560;
    DAT_803295c0 = xStrHash__FPCc((&PTR_@stringBase0_8026e83c)[*(int *)(param_1 + 0x1dc) * 4]);
    *(undefined4 *)(param_1 + 500) = DAT_80329578;
    DAT_803295d0 = xStrHash__FPCc((&PTR_@stringBase0_8026e83c)[*(int *)(param_1 + 500) * 4]);
  }
    */
}

void aqua_beam::reset() // I don't know whats wrong here. Probably a simple error
{
    firing = 0;
    bool tempBvar;

    while (true)
    {
        aqua_beam::kill_ring();
        tempBvar = ring.queue.empty();
        if (tempBvar)
            break;
    }
    ring_sounds = 0;
}

void aqua_beam::start() //100% code match, data does not match
{
    firing = 1;
    time = 0.0f;
    ring.emit_time = -1000000000.0f;
}

void aqua_beam::stop()
{
    firing = 0;
}

void aqua_beam::render()
{
}

xAnimTable* ZNPC_AnimTable_Prawn()
{
    // clang-format off
    S32 ourAnims[10] = {
        ANIM_Idle01,
        ANIM_Fidget01,
        ANIM_Fidget02,
        ANIM_Taunt01,
        ANIM_AttackWindup01,
        ANIM_AttackLoop01,        
        ANIM_AttackLoop01,
        ANIM_AttackEnd01,
        ANIM_Damage01,
        ANIM_Damage02,
        
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCPrawn", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, f1052, NULL, NULL, f1053, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget01], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget02], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, f1052, NULL, NULL,
                       f1053, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Damage01], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Damage02], 0x20, 0, f1052, NULL, NULL, f1053,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, f1454);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0x10, 0, 0, 0, 0, 0, f1455,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, f1455, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackEnd01], g_strz_subbanim[ANIM_Idle01],
                            0, 0, 0x10, 0, 0, 0, 0, 0, f1455, 0);

    return table;
}

void zNPCPrawn::NewTime(xScene* xscn, float dt)
{
    zNPCCommon::NewTime(xscn, dt);
    zNPCPrawn::render_closeup();
}

void zNPCPrawn::SelfSetup()
{
    xBehaveMgr* bmgr;
    xPsyche* psy;

    bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal(NPC_GOAL_PRAWNIDLE, NULL);
    psy->AddGoal(NPC_GOAL_PRAWNBEAM, NULL);
    psy->AddGoal(NPC_GOAL_PRAWNBOWL, NULL);
    psy->AddGoal(NPC_GOAL_PRAWNDAMAGE, NULL);
    psy->AddGoal(NPC_GOAL_PRAWNDEATH, NULL);
    psy->AddGoal(NPC_GOAL_LIMBO, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_PRAWNIDLE);
}

void zNPCPrawn::render_debug()
{
}

void zNPCPrawn::Render()
{
    xNPCBasic::Render();
    isCulled = 0;
    beam.render();
    zNPCPrawn::render_debug();
}

// void zNPCPrawn::update_round()
// {
// }
/* zNPCPrawn::update_round (void) */
void zNPCPrawn::update_round() {
    S32 var_r4;
    S32 temp_r3;
    S32 var_r30;
    zNPCPrawn *var_r31;
    zNPCSpawner **temp_r3_2;

    temp_r3 = this->life;
    if (temp_r3 == 0) {
        this->round = 3;
    } else {
        this->round = 2 - ((S32) ((temp_r3 - 1) * 3) / (s32) this->cfg_npc->useBoxBound);
    }
    var_r30 = 0;
    var_r31 = this;
    do {
        temp_r3_2 = var_r31->spawner;
        if (temp_r3_2 != NULL) {
            var_r4 = 4;
            if (var_r30 > (s32) this->round) {
                var_r4 = 3;
            }
            //Notify__11zNPCSpawnerF13en_SM_NOTICESPv(temp_r3_2, (en_SM_NOTICES) var_r4, NULL);
        }
        var_r30 += 1;
        var_r31 += 4;
    } while (var_r30 < 3);
}

// void zNPCPrawn::decompose()
// {
// }
/* zNPCPrawn::decompose (void) */
void zNPCPrawn::decompose() {
    S32 var_r30;
    zNPCPrawn *var_r31;
    zNPCSpawner **temp_r3;

    var_r31 = this;
    vanish();
    if ((U8) var_r31->fighting != 0) {
        var_r31->fighting = 0;
        //set_floor_state(var_r31, (zNPCPrawn::floor_state_enum) 0, 1, 1);
        //hide_model(var_r31);
        var_r30 = 0;
        do {
            temp_r3 = var_r31->spawner;
            if (temp_r3 != NULL) {
                //Notify__11zNPCSpawnerF13en_SM_NOTICESPv(temp_r3, (en_SM_NOTICES) 6, NULL);
                //Notify__11zNPCSpawnerF13en_SM_NOTICESPv(var_r31->unk2D0, (en_SM_NOTICES) 7, NULL);
                0; //pass
            }
            var_r30 += 1;
            var_r31 += 4;
        } while (var_r30 < 3);
        //zCameraEnableTracking((camera_owner_enum) 8);
        //stop__13xBinaryCameraFv((xBinaryCamera *) &boss_cam__27@unnamed@zNPCTypePrawn_cpp@);
    }
}

void zNPCPrawn::update_particles(float)
{
}

void zNPCPrawn::apply_pending()
{
    pending.change = 0;
    disco->set_state_range(pending.pattern.min, pending.pattern.max, SM_NPC_DEAD);
    disco->set_transition_delay(pending.transition_delay);
    disco->set_state_delay(pending.state_delay);
}

// void zNPCPrawn::set_floor_state(zNPCPrawn::floor_state_enum, bool, bool)
// {
// }
/* zNPCPrawn::set_floor_state (zNPCPrawn::floor_state_enum, bool, bool) */
void zNPCPrawn::set_floor_state(zNPCPrawn::floor_state_enum arg0, bool arg1, bool arg2) {
    U32 var_r5;
    U32 temp_r0;
    U32 temp_r3;
    z_disco_floor *temp_r4;

    if (((S32) arg0 != (S32) this->floor_state) || (arg2 != 0)) {
        this->floor_state = (floor_state_enum) arg0;
        //get_floor_info(this, arg0, (zNPCPrawn::range_type *) &this->unk304, &this->unk30C, &this->unk310);
        if (arg1 != 0) {
            apply_pending();
            return;
        }
        temp_r4 = this->disco;
        temp_r3 = temp_r4->state;
        if ((temp_r3 < (U32) temp_r4->min_state || (temp_r0 = temp_r4->max_state, ((temp_r3 > temp_r0) != 0)))) {
            var_r5 = 1;
        } else {
            var_r5 = (temp_r0 - temp_r3) + 1;
        }
        this->pending.counter = temp_r4->state_counter + var_r5;
        this->pending.change = 1;
    }
}

// void zNPCPrawn::vanish() //Didn't figure out how to finish it
// {
//     //0x18 is "flags"
//     pflags = 0; //0x1b
//     moreFlags = 0; //0x1c
//     chkby = 0; //0x22
//     penby = 0; //0x23
//     flags2.flg_colCheck = 0; //0xf0
//     flags2.flg_penCheck = 0; // 0xf1
// }

void zNPCPrawn::reappear()
{
}

void zNPCPrawn::render_closeup()
{
}

void zNPCGoalPrawnBeam::update_aim(float dt) //Needs clrlwi and cntlzw to be finished
{
    zNPCPrawn& prawn = *((zNPCPrawn*)this->psyche->clt_owner);
    prawn.turning();
}

S32 zNPCGoalPrawnIdle::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *((zNPCPrawn*)this->psyche->clt_owner);
    prawn.face_player = 1;
    prawn.delay = 0;
    prawn.set_floor_state(prawn.FS_DANGER, false, false);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPrawnIdle::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDamage::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)psyche->clt_owner;
    prawn.set_floor_state(prawn.FS_DANGER, false, false);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPrawnBowl::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *((zNPCPrawn*)this->psyche->clt_owner);
    prawn.face_player = 1;
    prawn.set_floor_state(prawn.FS_AIM_LANE, false, false);
    prawn.delay = 0;
    aiming = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPrawnBowl::Exit(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)psyche->clt_owner;
    prawn.set_floor_state(prawn.FS_BEGIN, true, false);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDamage::Exit(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)this->psyche->clt_owner;
    prawn.update_round();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)this->psyche->clt_owner;
    prawn.decompose();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn)
{
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

void xDebugAddTweak(const char*, xVec3*, const tweak_callback*, void*, U32)
{
}

void zNPCPrawn::turning() const
{
}

U8 zNPCPrawn::PhysicsFlags() const
{
    return 3;
}

U8 zNPCPrawn::ColPenByFlags() const
{
    return 16;
}

U8 zNPCPrawn::ColChkByFlags() const
{
    return 16;
}

U8 zNPCPrawn::ColPenFlags() const
{
    return 0;
}
