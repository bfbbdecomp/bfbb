#include "zNPCTypePrawn.h"

#include <types.h>

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
    bool bvar;

    while (true)
    {
        bvar = ring.queue.empty();
        if (bvar)
            break;
        aqua_beam::kill_ring();
    }
    ring_sounds = 0;

    // Ghidra output
    //      bool bVar1;
    //   *(undefined *)(param_1 + 0x3c) = 0;
    //   while( true ) {
    //     bVar1 = empty__42fixed_queue<>CFv((int *)(param_1 + 0xa4));
    //     if (bVar1) break;
    //     kill_ring__9aqua_beamFv(param_1);
    //   }
    //   *(undefined4 *)(param_1 + 0xf54) = 0;
    //   return;
}

void aqua_beam::start() //100% code match, data does not match
{
    firing = 1;
    time = 0;
    ring.emit_time = 0;
}

void aqua_beam::stop()
{
    firing = 0;
}

void aqua_beam::render()
{
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

void zNPCPrawn::update_round()
{
}

void zNPCPrawn::decompose()
{
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

void zNPCPrawn::set_floor_state(zNPCPrawn::floor_state_enum, bool, bool)
{
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

S32 zNPCGoalPrawnDamage::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)psyche->clt_owner;
    prawn.set_floor_state(prawn.FS_DANGER, false, false);
    zNPCGoalCommon::Enter(dt, updCtxt);
}

// S32 zNPCGoalPrawnBowl::Enter(float dt, void* updCtxt)
// {
//     zNPCPrawn& prawn = *(zNPCPrawn*)psyche->clt_owner;
//     prawn.set_floor_state(prawn.FS_DANGER, false, false);
//     zNPCGoalCommon::Enter(dt, updCtxt);
// }

S32 zNPCGoalPrawnBowl::Exit(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)psyche->clt_owner;
    prawn.set_floor_state(prawn.FS_BEGIN, true, false);
    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDamage::Exit(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)this->psyche->clt_owner;
    prawn.update_round();
    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Enter(float dt, void* updCtxt)
{
    zNPCPrawn& prawn = *(zNPCPrawn*)this->psyche->clt_owner;
    prawn.decompose();
    zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Exit(float dt, void* updCtxt)
{
    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalPrawnDeath::Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn)
{
    xGoal::Process(trantype, dt, updCtxt, xscn);
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
