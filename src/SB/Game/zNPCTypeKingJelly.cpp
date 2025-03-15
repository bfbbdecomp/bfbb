#include "zNPCTypeKingJelly.h"

#include <types.h>

namespace
{
    void tweak()
    {
    }
} // namespace

void lightning_ring::create()
{
}

xVec3* zNPCKingJelly::get_bottom()
{
    return (xVec3*)&this->model->Mat->pos;
}

void zNPCKingJelly::Setup()
{
    this->children_size = 0; //Called for address 0x88C, Started plugging things in till it matched.
    load_model();
    load_curtain_model();
    zNPCSubBoss::Setup();
}

void zNPCKingJelly::Destroy()
{
    decompose();
    post_decompose();
    zNPCCommon::Destroy();
}

void zNPCKingJelly::BUpdate(xVec3* pos)
{
    // Original stack variables:
    //xVec3& subloc;
    //xVec3 loc;

    // Something like this...
    // Some vec is being added to another on the stack (probably)
    // (xVec3&)this->model->Mat->pos = (xVec3&)this->model->Mat->pos + *pos;

    zNPCCommon::BUpdate(pos);
}

// probably how many times the jellyfish can hit the player for that round
// whatever round it is, add one.
// Round = 0, max strikes = 1
// Round = 1, max strikes = 2
// Round = 2, max strikes = 3
S32 zNPCKingJelly::max_strikes()
{
    return round + 1;
}

//void zNPCKingJelly::update_round()
//{
//  if (life == 0)
//  {
// store zero in something??
// 0x2bc
//     round = 0;
//     return;
//  }

//round = life-- * 3;

// updating 0x2bc
// round =

/*
        // Done
        if (*(int *)(param_1 + 0x2c4) == 0) {
            *(undefined4 *)(param_1 + 700) = 0;
            return;
        }
        // 0x2BC

        ????
        *(int *)(param_1 + 700) = 2 - ((*(int *)(param_1 + 0x2c4) + -1) * 3) / DAT_80328544;
        round = 2 - ((life) + -1) * 3) / DAT_80328544;
    */
// life--;
// tweak();
// tweak();
//tweak();
//}

void zNPCKingJelly::on_change_ambient_ring(const tweak_info&)
{
}

void zNPCKingJelly::on_change_fade_obstructions(const tweak_info&)
{
}

void zNPCKingJelly::render_debug()
{
}

void zNPCKingJelly::decompose()
{
}

void zNPCKingJelly::post_decompose()
{
}

void zNPCKingJelly::vanish()
{
    old.moreFlags = moreFlags;
    pflags = 0;
    moreFlags = 0;
    flags2.flg_colCheck = 0;
    flags2.flg_penCheck = 0;
    chkby = 0;
    penby = 0;
    xEntHide(this);
}

void zNPCKingJelly::reappear()
{
    moreFlags = old.moreFlags;
    this->RestoreColFlags();
    xEntShow(this);
}

void zNPCKingJelly::create_tentacle_lightning()
{
}

void zNPCKingJelly::generate_spawn_particles()
{
}

void zNPCKingJelly::load_model()
{
}

void zNPCKingJelly::load_curtain_model()
{
}

S32 zNPCGoalKJDamage::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    // TODO
    return 0;
}

S32 zNPCGoalKJDamage::Enter(F32 dt, void* updCtxt)
{
    // TODO
    return 0;
}

S32 zNPCGoalKJDamage::Exit(F32 dt, void* updCtxt)
{
    // Needs to be a reference, casting as a pointer doesn't work.
    // Would never have gotten this if not for DWARF data.
    zNPCKingJelly& kj = *(zNPCKingJelly*)this->psyche->clt_owner;

    kj.update_round();
    kj.disable_tentacle_damage = false;

    return xGoal::Exit(dt, updCtxt);
}
