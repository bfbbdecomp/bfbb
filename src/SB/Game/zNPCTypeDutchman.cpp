#include "xVec3.h"
#include "xMath3.h"
#include "xMathInlines.h"
#include "xDebug.h"
#include "xMemMgr.h"
#include "iCamera.h"
#include "zGlobals.h"
#include "zNPCTypeDutchman.h"

#include <types.h>

#define FRAME_TIME (1.0f / 60.0f)

#define ANIM_Idle01 1
#define ANIM_Fidget01 4 //0x10
#define ANIM_Fidget02 5 //0x14
#define ANIM_Fidget03 6 //0x18
#define ANIM_Taunt01 7 // 0x1c
#define ANIM_Death01 11 //0x2c
#define ANIM_AttackWindup01 12 //0x30
#define ANIM_AttackLoop01 13 //0x34
#define ANIM_AttackEnd01 14 //0x38
#define ANIM_Attack02Windup01 16 //0x40
#define ANIM_Attack02Loop01 17 //0x44
#define ANIM_Attack02End01 18 //0x48
#define ANIM_LassoGrab01 19 //0x4c

#define SOUND_BEAM 0
#define SOUND_FLAME 1
#define SOUND_VAPOR 2
#define SOUND_HIGH_HUMM 3
#define SOUND_BIZARRE 4
#define SOUND_MORE_BIZARRE 5

namespace
{

    F32 angle_difference(const xVec2&, const xVec2&);

    struct sound_property
    {
        F32 volume;
        F32 range_inner;
        F32 range_outer;
        F32 delay;
        F32 fade_time;
    };

    struct tweak_group
    {
        F32 orbit_radius;
        xVec3 accel;
        xVec3 max_vel;
        F32 turn_accel;
        F32 turn_max_vel;
        F32 ground_y;
        F32 ground_radius;
        F32 alpha;
        F32 speed_mult[3];
        F32 reticle_y;
        F32 reticle_radius;
        struct
        {
            F32 alpha;
            F32 scale;
            F32 yoffset;
            F32 vel_u;
            F32 vel_v;
        } halo;
        struct
        {
            F32 turn_vel;
            F32 turn_accel;
            F32 up_vel;
        } initiate;
        beam_type beam;
        struct
        {
            xVec3 accel;
            xVec3 max_vel;
            F32 turn_accel;
            F32 turn_max_vel;
            F32 fade_time;
            F32 trail_width;
        } teleport;
        struct
        {
            F32 accel;
            F32 max_vel;
            F32 start_delay;
            F32 wave_rate;
            F32 unit_dist;
            F32 start_dist;
            F32 lead_dist;
            F32 emit_rate[3];
            F32 emit_width[3];
            F32 snot_dist;
            F32 snot_vel;
            F32 snot_height;
            F32 splash_width;
            F32 decay;
            F32 blob_pitch;
            F32 spray_width;
            F32 warm_up_time;
            F32 sneeze_mult;
        } flame;
        struct
        {
            S32 dummy;
        } fly;
        struct
        {
            F32 min_dist_enable;
            F32 min_dist_disable;
            F32 max_angle_enable;
            F32 max_angle_disable;
            F32 safety_dist;
            F32 decel;
            F32 escape_delay;
        } lasso;
        struct
        {
            F32 beam_radius;
            F32 beam_blast_radius;
            xVec3 flame_size;
            xVec3 snot_size;
            F32 hand_radius;
            F32 slime_width;
            F32 slime_time;
        } damage;
        struct
        {
            F32 delay;
            F32 duration;
            F32 rate_mult;
            F32 yoffset;
        } wipe;
        struct
        {
            F32 wind_duration;
            F32 wink_duration;
            F32 start_y;
            F32 end_y;
            F32 wind_min;
            F32 wind_kill_dist;
            F32 wind_mag_up;
            F32 wind_mag_right;
        } death;
        sound_property sound[6];
        void* context;
        tweak_callback cb_orbit_radius;
        tweak_callback cb_ground;
        tweak_callback cb_damage;
        tweak_callback cb_flame_rate;
        tweak_callback cb_alpha;
        tweak_callback cb_reticle;
        tweak_callback cb_halo_uv;
        tweak_callback cb_blob_pitch;
        tweak_callback cb_sound;

        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*);

        void load(xModelAssetParam* ap, U32 apsize)
        {
            register_tweaks(true, ap, apsize, NULL);
        }
    };

    struct sound_data_type
    {
        U32 id;
        U32 handle;
    };

    struct sound_asset
    {
        const char* name;
        U32 priority;
        U32 flags;
    };

    static tweak_group tweak;
    static zParEmitter* plasma_emitter;
    static xParEmitterCustomSettings plasma_emitter_settings;
    static zParEmitter* spark_emitter;
    static xParEmitterCustomSettings spark_emitter_settings;
    static zParEmitter* light_emitter;
    static xParEmitterCustomSettings light_emitter_settings;
    static zParEmitter* eyeglow_emitter[2];
    static zParEmitter* death_emitter;
    static zParEmitter* dissolve_emitter;
    static zParEmitter* fadeout_emitter;
    static zParEmitter* fadein_emitter;
    static zParEmitter* flame_emitter[3];
    static xParEmitterCustomSettings flame_emitter_settings;
    static zParEmitter* snot_emitter;
    static xParEmitterCustomSettings snot_emitter_settings;
    static zParEmitter* slime_emitter;
    static xParEmitterCustomSettings slime_emitter_settings;
    static zParEmitter* hand_trail_emitter;
    static zParEmitter* blob_emitter;
    static xFXRibbon eye_scorch[2];
    static sound_data_type sound_data[6];
    static xBinaryCamera boss_cam = { { { 6.0f, 3.0f, 2.0f },
                                        { 0.2f, 2.2f, -1.0f },
                                        { 1.0f, 0.2f, 1.5f },
                                        10.0f,
                                        10.0f,
                                        10.0f,
                                        10.0f,
                                        30.0f,
                                        -0.17453292f } };

    static const delay_goal sequence[3][16] = { { { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANFLAME, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 0.1f },
                                                  { NPC_GOAL_DUTCHMANPOSTFLAME, 0.0f },
                                                  { 0, -1.0f } },
                                                { { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANFLAME, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 0.1f },
                                                  { NPC_GOAL_DUTCHMANPOSTFLAME, 0.0f },
                                                  { 0, -1.0f } },
                                                { { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANDISAPPEAR, 0.0f },
                                                  { NPC_GOAL_DUTCHMANBEAM, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 1.0f },
                                                  { NPC_GOAL_DUTCHMANFLAME, 0.0f },
                                                  { NPC_GOAL_DUTCHMANIDLE, 0.1f },
                                                  { NPC_GOAL_DUTCHMANPOSTFLAME, 0.0f },
                                                  { 0, -1.0f } } };

    static const xFXRibbon::curve_node burn_ribbon_curve[7] = {
        { 0.0f, { 255, 255, 255, 255 }, 0.4f }, { 0.05f, { 255, 255, 155, 255 }, 0.2f },
        { 0.15f, { 205, 155, 55, 255 }, 0.2f }, { 0.3f, { 155, 55, 0, 255 }, 0.2f },
        { 0.45f, { 55, 0, 0, 255 }, 0.2f },     { 0.65f, { 0, 0, 0, 255 }, 0.4f },
        { 1.0f, { 0, 0, 0, 0 }, 0.6f }
    };

    static const sound_asset sound_assets[6] = {
        { "FD_eyebeam_loop", 0, 1 }, { "FD_flame_loop", 0, 1 }, { "FD_vapor_loop", 0, 1 },
        { "FD_float_loop", 0, 1 },   { "FD_gas", 0, 0 },        { "FD_revert", 0, 0 }
    };

    F32 look_at(xMat3x3& mat, const xVec3& at)
    {
        F32 mag = at.length();

        if (mag >= -0.00001f && mag <= 0.00001f)
        {
            mat = g_I3;
            return 0.0f;
        }

        mat.at = at;
        mat.at *= 1.0f / mag;

        F32 ax = xabs(mat.at.x);
        F32 ay = xabs(mat.at.y);
        F32 az = xabs(mat.at.z);

        if (ax < ay && ax < az)
        {
            mat.right.assign(0.0f, mat.at.z, -mat.at.y);
        }
        else if (ay < az)
        {
            mat.right.assign(-mat.at.z, 0.0f, mat.at.x);
        }
        else
        {
            mat.right.assign(mat.at.y, -mat.at.x, 0.0f);
        }

        mat.right.normalize();
        mat.up = mat.right.cross(mat.at);

        return mag;
    }

    static void init_sound()
    {
        memset(sound_data, 0, sizeof(sound_data));

        for (S32 i = 0; i < 6; i++)
        {
            sound_data[i].id = xStrHash(sound_assets[i].name);
        }
    }

    U32 play_sound(S32 which, const xVec3* loc, F32 volume)
    {
        const sound_asset& asset = sound_assets[which];
        const sound_data_type& data = sound_data[which];
        const sound_property& prop = tweak.sound[which];

        if (asset.flags & 1)
        {
            return xSndPlay3DFade(data.id, volume * prop.volume, 1.0f, asset.priority, 0x800, loc,
                                  prop.range_inner, prop.range_outer, SND_CAT_GAME, 0.0f,
                                  prop.delay);
        }

        return xSndPlay3D(data.id, volume * prop.volume, 1.0f, asset.priority, 0x800, loc,
                          prop.range_inner, prop.range_outer, SND_CAT_GAME, prop.delay);
    }

    void kill_sound(S32 which, U32 handle)
    {
        const sound_asset& asset = sound_assets[which];
        const sound_property& prop = tweak.sound[which];

        if (asset.flags & 1)
        {
            xSndStopFade(handle, prop.fade_time);
        }
        else
        {
            xSndStop(handle);
        }
    }

    static void set_volume(S32 which, U32 handle, F32 new_vol)
    {
        xSndSetVol(handle, tweak.sound[which].volume * new_vol);
    }
} // namespace

//13 new states
//8 new transitions
xAnimTable* ZNPC_AnimTable_Dutchman()
{
    // clang-format off
    S32 ourAnims[13] = {
        ANIM_Idle01,
        ANIM_Death01,
        ANIM_Fidget01,
        ANIM_Fidget02,
        ANIM_Fidget03,
        ANIM_AttackWindup01,
        ANIM_AttackLoop01,
        ANIM_AttackEnd01,
        ANIM_Attack02Windup01,
        ANIM_Attack02Loop01,
        ANIM_Attack02End01,
        ANIM_LassoGrab01,
    };
    // clang-format on
    xAnimTable* table = xAnimTableNew("zNPCDutchman", NULL, 0);

    xAnimTableNewState(table, g_strz_subbanim[ANIM_Idle01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Death01], 0, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget01], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget02], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Fidget03], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Taunt01], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackWindup01], 0x20, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackLoop01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_AttackEnd01], 0x20, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Windup01], 0x20, 0, 1.0f, NULL, NULL,
                       0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02Loop01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_Attack02End01], 0x20, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_subbanim[ANIM_LassoGrab01], 0x20, 0x2000000, 1.0f, NULL, NULL,
                       0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_subbanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackWindup01],
                            g_strz_subbanim[ANIM_AttackLoop01], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_AttackLoop01],
                            g_strz_subbanim[ANIM_AttackEnd01], 0, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Windup01],
                            g_strz_subbanim[ANIM_Attack02Loop01], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1f,
                            0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Attack02Loop01],
                            g_strz_subbanim[ANIM_Attack02End01], 0, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Idle01], 0,
                            0, 0x10, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02],
                            g_strz_subbanim[ANIM_AttackWindup01], 0, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_Fidget02], g_strz_subbanim[ANIM_Fidget01],
                            0, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0);
    xAnimTableNewTransition(table, g_strz_subbanim[ANIM_LassoGrab01], g_strz_subbanim[ANIM_Death01],
                            0, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0);

    return table;
}

zNPCDutchman* dutchman_reticle_ent;
xVec3 dutchman_reticle_center;
F32 dutchman_reticle_radius;

static U32 dutchman_count;

zNPCDutchman::zNPCDutchman(S32 myType) : zNPCSubBoss(myType)
{
    memset(&flag, 0, sizeof(flag));
    dutchman_reticle_ent = this;
}

void zNPCDutchman::Init(xEntAsset* asset)
{
    dutchman_count++;

    boss_cam.init();

    zNPCCommon::Init(asset);

    flg_move = 1;
    flg_vuln = 1;

    const char* scorch_name[2] = { "Dutchman Left Burn", "Dutchman Right Burn" };

    for (S32 i = 0; i < 2; i++)
    {
        eye_scorch[i].init(0x1ff, scorch_name[i]);
        eye_scorch[i].set_default_config();
        eye_scorch[i].set_curve(burn_ribbon_curve, 7);
        eye_scorch[i].set_texture("fx_streak1");
        eye_scorch[i].cfg.life_time = 5.0f;
        eye_scorch[i].refresh_config();
    }

    RwTexture* laser_texture = (RwTexture*)xSTFindAsset(xStrHash("laser_beam_white_blue"), NULL);

    laser_raster = laser_texture->raster;

    waves.init(15);
    slime.slices.init(63);

    init_sound();

    S32 model_index = 0;
    xModelInstance* m = model;

    while (m != NULL)
    {
        if (model_index == 1)
        {
            m->Flags |= 0x8000;
            break;
        }

        m = m->Next;
        model_index++;
    }
}

void zNPCDutchman::Setup()
{
    zNPCSubBoss::Setup();
}

void zNPCDutchman::Reset()
{
    zNPCCommon::Reset();
    memset(&flag, 0, 16);
    decompose();
    life = 3;
    round = 0;
    stage = -1;
    alpha = 1.0f;
    update_round();
    face_player();
    flg_vuln = 1;
    reset_speed();
    move.vel = 0.0f;
    move.dest = get_center();
    flag.move = MOVE_FOLLOW;
    flames.imax_dist = 1.0f / tweak.ground_radius;
    reset_blob_mat();
    waves.clear();
    slime.slices.clear();
    eye_scorch[0].clear();
    eye_scorch[1].clear();
    fade.sound_handle = 0;
    vanish();
    refresh_reticle();
    flag.fighting = false;
    plasma_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_PLASMA");
    plasma_emitter_settings.custom_flags = 0x100;
    plasma_emitter_settings.pos = g_O3;
    spark_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_SPARKS");
    spark_emitter_settings.custom_flags = 0x100;
    spark_emitter_settings.pos = g_O3;
    light_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_LIGHT");
    light_emitter_settings.custom_flags = 0x110;
    light_emitter_settings.pos = g_O3;
    light_emitter_settings.rate.set((2.0f / FRAME_TIME) * tweak.beam.light_rate);
    eyeglow_emitter[0] = zParEmitterFind("PAREMIT_DUTCHMAN_EYEGLOW0");
    eyeglow_emitter[1] = zParEmitterFind("PAREMIT_DUTCHMAN_EYEGLOW1");
    death_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_DEATH");
    dissolve_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_DISSOLVE");
    fadeout_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FADEOUT");
    fadein_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FADEIN");
    flame_emitter[0] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_LIGHT");
    flame_emitter[1] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_NORMAL");
    flame_emitter[2] = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_SPRAY");
    flame_emitter_settings.custom_flags = 0x110;
    flame_emitter_settings.pos = g_O3;
    flame_emitter_settings.rate.set(1.0f / FRAME_TIME);
    snot_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_FLAME_SNOT");
    snot_emitter_settings.custom_flags = 0x300;
    slime_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_SLIME_TRAIL");
    slime_emitter_settings.custom_flags = 0x100;
    hand_trail_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_HAND_TRAIL");
    blob_emitter = zParEmitterFind("PAREMIT_DUTCHMAN_BLOB");
    psy_instinct->GoalSet(NPC_GOAL_DUTCHMANNIL, 1);
}

void zNPCDutchman::Destroy()
{
    zNPCCommon::Destroy();
    dutchman_count--;
}

void zNPCDutchman::Process(xScene* xscn, F32 dt)
{
    if (!flag.fighting)
    {
        zNPCCommon::Process(xscn, dt);
    }
    else
    {
        delay += dt;
        psy_instinct->Timestep(dt, NULL);
        if (!flag.fighting)
        {
            zNPCCommon::Process(xscn, dt);
        }
        else
        {
            if (flag.face_player)
            {
                const xVec3& player_loc = (xVec3&)globals.player.ent.model->Mat->pos;
                const xVec3& center = get_center();

                turn.dir.assign(player_loc.x - center.x, player_loc.z - center.z);
                turn.dir.normalize();
            }
            update_turn(dt);
            update_move(dt);
            update_animation(dt);
            update_flames(dt);
            update_eye_glow(dt);
            update_hand_trail(dt);
            update_fade(dt);
            update_slime(dt);

            if (check_player_damage())
            {
                zEntPlayer_Damage((xBase*)this, 1);
            }
            update_camera(dt);
            refresh_reticle();
            flg_xtrarend |= 1;
            zNPCCommon::Process(xscn, dt);
        }
    }
}

S32 zNPCDutchman::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled)
{
    switch (toEvent)
    {
    case eEventNPCFightOn:
        start_fight();
        break;
    case eEventNPCSetActiveOff:
        psy_instinct->GoalSet(NPC_GOAL_DUTCHMANDEATH, 1);
        break;
    default:
        *handled = 0;
        return zNPCCommon::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
    }

    return 1;
}

void zNPCDutchman::Render()
{
    zNPCDutchman::render_debug();
}

void zNPCDutchman::RenderExtra()
{
    S32 oldzwrite;
    S32 oldztest;
    S32 oldsrcblend;
    S32 olddestblend;

    RwRenderStateGet(rwRENDERSTATEZWRITEENABLE, &oldzwrite);
    RwRenderStateGet(rwRENDERSTATEZTESTENABLE, &oldztest);
    RwRenderStateGet(rwRENDERSTATESRCBLEND, &oldsrcblend);
    RwRenderStateGet(rwRENDERSTATEDESTBLEND, &olddestblend);

    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)TRUE);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDONE);

    iDrawSetFBMSK(0xffffffff);

    for (xModelInstance* m = model; m != NULL; m = m->Next)
    {
        xModelRenderSingle(m);
    }

    iDrawSetFBMSK(0);

    for (xModelInstance* m = model; m != NULL; m = m->Next)
    {
        xModelRenderSingle(m);
    }

    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)FALSE);

    U8 oldcmp = FALSE;

    if (flag.beaming && (beam[0].segments + beam[1].segments) != 0)
    {
        oldcmp = TRUE;
    }

    U8 haloing = flag.fade != FADE_TELEPORT;

    if (oldcmp)
    {
        render_beam();
    }

    if (haloing)
    {
        render_halo();
    }

    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)oldzwrite);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)oldztest);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)oldsrcblend);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)olddestblend);
}

void zNPCDutchman::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_Dutchman;
    NPCS_SndTablePrepare(g_sndTrax_Dutchman);
    cfg_npc->snd_trax = g_sndTrax_Dutchman;
    NPCS_SndTablePrepare(g_sndTrax_Dutchman);
    tweak.load(parmdata, pdatsize);
}

namespace
{
    void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char*)
    {
        if (init)
        {
            orbit_radius = 13.0f;
            auto_tweak::load_param<F32, F32>(orbit_radius, 1.0f, 0.01f, 50.0f, ap, apsize,
                                             "orbit_radius");
        }
        if (init)
        {
            accel = xVec3::create(1.0f, 3.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(accel, 0, 0, 0, ap, apsize, "accel");
        }
        if (init)
        {
            max_vel = xVec3::create(1.0f, 3.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(max_vel, 0, 0, 0, ap, apsize, "max_vel");
        }
        if (init)
        {
            turn_accel = 540.0f;
            auto_tweak::load_param<F32, F32>(turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "turn_accel");
        }
        if (init)
        {
            turn_max_vel = 180.0f;
            auto_tweak::load_param<F32, F32>(turn_max_vel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "turn_max_vel");
        }
        if (init)
        {
            ground_y = -1.4f;
            auto_tweak::load_param<F32, F32>(ground_y, 1.0f, -1000000000.0f, 1000000000.0f, ap,
                                             apsize, "ground_y");
        }
        if (init)
        {
            ground_radius = 12.0f;
            auto_tweak::load_param<F32, F32>(ground_radius, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "ground_radius");
        }
        if (init)
        {
            alpha = 1.0f;
            auto_tweak::load_param<F32, F32>(alpha, 1.0f, 0.0f, 1.0f, ap, apsize, "alpha");
        }
        if (init)
        {
            speed_mult[0] = 1.0f;
            auto_tweak::load_param<F32, F32>(speed_mult[0], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[0]");
        }
        if (init)
        {
            speed_mult[1] = 1.5f;
            auto_tweak::load_param<F32, F32>(speed_mult[1], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[1]");
        }
        if (init)
        {
            speed_mult[2] = 2.0f;
            auto_tweak::load_param<F32, F32>(speed_mult[2], 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "speed_mult[2]");
        }
        if (init)
        {
            reticle_y = 0.0f;
            auto_tweak::load_param<F32, F32>(reticle_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "reticle_y");
        }
        if (init)
        {
            reticle_radius = 1.0f;
            auto_tweak::load_param<F32, F32>(reticle_radius, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "reticle_radius");
        }
        if (init)
        {
            halo.alpha = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.alpha, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "halo.alpha");
        }
        if (init)
        {
            halo.scale = 1.0f;
            auto_tweak::load_param<F32, F32>(halo.scale, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "halo.scale");
        }
        if (init)
        {
            halo.yoffset = 1.0f;
            auto_tweak::load_param<F32, F32>(halo.yoffset, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "halo.yoffset");
        }
        if (init)
        {
            halo.vel_u = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.vel_u, 1.0f, -1000000000.0, 1000000000.0f, ap,
                                             apsize, "halo.vel_u");
        }
        if (init)
        {
            halo.vel_v = 0.0f;
            auto_tweak::load_param<F32, F32>(halo.vel_v, 1.0f, -1000000000.0, 1000000000.0f, ap,
                                             apsize, "halo.vel_v");
        }
        if (init)
        {
            initiate.turn_vel = 900.0f;
            auto_tweak::load_param<F32, F32>(initiate.turn_vel, DEG2RAD(10), -1000000000.0f,
                                             1000000000.0f, ap, apsize, "initiate.turn_vel");
        }
        if (init)
        {
            initiate.turn_accel = 180.0f;
            auto_tweak::load_param<F32, F32>(initiate.turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f,
                                             ap, apsize, "initiate.turn_accel");
        }
        if (init)
        {
            initiate.up_vel = 10.0f;
            auto_tweak::load_param<F32, F32>(initiate.up_vel, DEG2RAD(10), 0.01f, 1000000000.0f, ap,
                                             apsize, "initiate.up_vel");
        }
        if (init)
        {
            beam.knock_back = 1.0f;
            auto_tweak::load_param<F32, F32>(beam.knock_back, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "beam.knock_back");
        }
        if (init)
        {
            beam.thickness = 0.4f;
            auto_tweak::load_param<F32, F32>(beam.thickness, 1.0f, 0.001f, 10.0f, ap, apsize,
                                             "beam.thickness");
        }
        if (init)
        {
            beam.focus_time = 0.2f;
            auto_tweak::load_param<F32, F32>(beam.focus_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "beam.focus_time");
        }
        if (init)
        {
            beam.segment_width = 0.2f;
            auto_tweak::load_param<F32, F32>(beam.segment_width, 1.0f, 0.001f, 10.0f, ap, apsize,
                                             "beam.segment_width");
        }
        if (init)
        {
            beam.accel = 80.0f;
            auto_tweak::load_param<F32, F32>(beam.accel, 1.0f, 0.01f, 1000000000.0f, ap, apsize,
                                             "beam.accel");
        }
        if (init)
        {
            beam.max_vel = 40.0f;
            auto_tweak::load_param<F32, F32>(beam.max_vel, 1.0f, 0.01f, 1000000000.0f, ap, apsize,
                                             "beam.max_vel");
        }
        if (init)
        {
            beam.start_dist = 1.0f;
            auto_tweak::load_param<F32, F32>(beam.start_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.start_dist");
        }
        if (init)
        {
            beam.end_dist = 25.0f;
            auto_tweak::load_param<F32, F32>(beam.end_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.end_dist");
        }
        if (init)
        {
            beam.wave_freq = 5.0f;
            auto_tweak::load_param<F32, F32>(beam.wave_freq, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "beam.wave_freq");
        }
        if (init)
        {
            beam.wave_min = 0.5f;
            auto_tweak::load_param<F32, F32>(beam.wave_min, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.wave_min");
        }
        if (init)
        {
            beam.wave_max = 2.0f;
            auto_tweak::load_param<F32, F32>(beam.wave_max, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "beam.wave_max");
        }
        if (init)
        {
            beam.light_rate = 0.1f;
            auto_tweak::load_param<F32, F32>(beam.light_rate, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "beam.light_rate");
        }
        if (init)
        {
            beam.glow_dist = 0.25f;
            auto_tweak::load_param<F32, F32>(beam.glow_dist, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "beam.glow_dist");
        }
        if (init)
        {
            beam.shots[0] = 2;
            auto_tweak::load_param<S32, S32>(beam.shots[0], 1, 1, 1000, ap, apsize,
                                             "beam.shots[0]");
        }
        if (init)
        {
            beam.shots[1] = 3;
            auto_tweak::load_param<S32, S32>(beam.shots[1], 1, 1, 1000, ap, apsize,
                                             "beam.shots[1]");
        }
        if (init)
        {
            beam.shots[2] = 4;
            auto_tweak::load_param<S32, S32>(beam.shots[2], 1, 1, 1000, ap, apsize,
                                             "beam.shots[2]");
        }
        if (init)
        {
            beam.fade_dist = 20.0f;
            auto_tweak::load_param<F32, F32>(beam.fade_dist, 1.0f, 0.0f, 100000.0f, ap, apsize,
                                             "beam.fade_dist");
        }
        if (init)
        {
            teleport.accel = xVec3::create(20.0f, 20.0f, 20.0f);
            auto_tweak::load_param<xVec3, S32>(teleport.accel, 0, 0, 0, ap, apsize,
                                               "teleport.accel");
        }
        if (init)
        {
            teleport.max_vel = xVec3::create(20.0f, 20.0f, 20.0f);
            auto_tweak::load_param<xVec3, S32>(teleport.max_vel, 0, 0, 0, ap, apsize,
                                               "teleport.max_vel");
        }
        if (init)
        {
            teleport.turn_accel = 2160.0f;
            auto_tweak::load_param<F32, F32>(teleport.turn_accel, DEG2RAD(10), 0.01f, 1000000000.0f,
                                             ap, apsize, "teleport.turn_accel");
        }
        if (init)
        {
            teleport.turn_max_vel = 720.0f;
            auto_tweak::load_param<F32, F32>(teleport.turn_max_vel, DEG2RAD(10), 0.01,
                                             1000000000.0f, ap, apsize, "teleport.turn_max_vel");
        }
        if (init)
        {
            teleport.fade_time = 0.5f;
            auto_tweak::load_param<F32, F32>(teleport.fade_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "teleport.fade_time");
        }
        if (init)
        {
            teleport.trail_width = 0.0f;
            auto_tweak::load_param<F32, F32>(teleport.trail_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "teleport.trail_width");
        }
        if (init)
        {
            flame.accel = 80.0f;
            auto_tweak::load_param<F32, F32>(flame.accel, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "flame.accel");
        }
        if (init)
        {
            flame.max_vel = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.max_vel, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "flame.max_vel");
        }
        if (init)
        {
            flame.start_delay = 0.5f;
            auto_tweak::load_param<F32, F32>(flame.start_delay, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "flame.start_delay");
        }
        if (init)
        {
            flame.wave_rate = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.wave_rate, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "flame.wave_rate");
        }
        if (init)
        {
            flame.unit_dist = 0.8f;
            auto_tweak::load_param<F32, F32>(flame.unit_dist, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "flame.unit_dist");
        }
        if (init)
        {
            flame.start_dist = 0.0f;
            auto_tweak::load_param<F32, F32>(flame.start_dist, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.start_dist");
        }
        if (init)
        {
            flame.lead_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.lead_dist, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.lead_dist");
        }
        if (init)
        {
            flame.emit_rate[0] = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[0], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[0]");
        }
        if (init)
        {
            flame.emit_rate[1] = 4.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[1], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[1]");
        }
        if (init)
        {
            flame.emit_rate[2] = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_rate[2], 1.0f, 0.0f, 1000000.0f, ap, apsize,
                                             "flame.emit_rate[2]");
        }
        if (init)
        {
            flame.emit_width[0] = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[0], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[0]");
        }
        if (init)
        {
            flame.emit_width[1] = 0.3f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[1], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[1]");
        }
        if (init)
        {
            flame.emit_width[2] = 1.0f;
            auto_tweak::load_param<F32, F32>(flame.emit_width[2], 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.emit_width[2]");
        }
        if (init)
        {
            flame.snot_dist = 0.2f;
            auto_tweak::load_param<F32, F32>(flame.snot_dist, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.snot_dist");
        }
        if (init)
        {
            flame.snot_vel = 2.0f;
            auto_tweak::load_param<F32, F32>(flame.snot_vel, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "flame.snot_vel");
        }
        if (init)
        {
            flame.snot_height = -0.2f;
            auto_tweak::load_param<F32, F32>(flame.snot_height, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "flame.snot_height");
        }
        if (init)
        {
            flame.splash_width = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.splash_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.splash_width");
        }
        if (init)
        {
            flame.decay = 0.75f;
            auto_tweak::load_param<F32, F32>(flame.decay, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "flame.decay");
        }
        if (init)
        {
            flame.blob_pitch = 60.0f;
            auto_tweak::load_param<F32, F32>(flame.blob_pitch, DEG2RAD(10), -90.0f, 90.0f, ap,
                                             apsize, "flame.blob_pitch");
        }
        if (init)
        {
            flame.spray_width = 0.1f;
            auto_tweak::load_param<F32, F32>(flame.splash_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "flame.spray_width");
        }
        if (init)
        {
            flame.warm_up_time = 0.4f;
            auto_tweak::load_param<F32, F32>(flame.warm_up_time, 1.0f, 0.01f, 10.0f, ap, apsize,
                                             "flame.warm_up_time");
        }
        if (init)
        {
            flame.sneeze_mult = 10.0f;
            auto_tweak::load_param<F32, F32>(flame.sneeze_mult, 1.0f, 1.0f, 100.0f, ap, apsize,
                                             "flame.sneeze_mult");
        }
        if (init)
        {
            lasso.min_dist_enable = 2.0f;
            auto_tweak::load_param<F32, F32>(lasso.min_dist_enable, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.min_dist_enable");
        }
        if (init)
        {
            lasso.min_dist_disable = 0.5f;
            auto_tweak::load_param<F32, F32>(lasso.min_dist_disable, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.min_dist_disable");
        }
        if (init)
        {
            lasso.max_angle_enable = 60.0f;
            auto_tweak::load_param<F32, F32>(lasso.max_angle_enable, DEG2RAD(10), 0.01f,
                                             1000000000.0f, ap, apsize, "lasso.max_angle_enable");
        }
        if (init)
        {
            lasso.max_angle_disable = 90.0f;
            auto_tweak::load_param<F32, F32>(lasso.max_angle_disable, DEG2RAD(10), 0.01f,
                                             1000000000.0f, ap, apsize, "lasso.max_angle_disable");
        }
        if (init)
        {
            lasso.safety_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(lasso.safety_dist, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.safety_dist");
        }
        if (init)
        {
            lasso.decel = 20.0f;
            auto_tweak::load_param<F32, F32>(lasso.decel, 1.0f, 0.0f, 1000.0f, ap, apsize,
                                             "lasso.decel");
        }
        if (init)
        {
            lasso.escape_delay = 1.0f;
            auto_tweak::load_param<F32, F32>(lasso.escape_delay, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "lasso.escape_delay");
        }
        if (init)
        {
            damage.beam_radius = 0.1f;
            auto_tweak::load_param<F32, F32>(damage.beam_radius, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.beam_radius");
        }
        if (init)
        {
            damage.beam_blast_radius = 0.4f;
            auto_tweak::load_param<F32, F32>(damage.beam_blast_radius, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "damage.beam_blast_radius");
        }
        if (init)
        {
            damage.flame_size = xVec3::create(0.4f, 1.5f, 3.0f);
            auto_tweak::load_param<xVec3, S32>(damage.flame_size, 0, 0, 0, ap, apsize,
                                               "damage.flame_size");
        }
        if (init)
        {
            damage.snot_size = xVec3::create(2.0f, 2.0f, 2.5f);
            auto_tweak::load_param<xVec3, S32>(damage.snot_size, 0, 0, 0, ap, apsize,
                                               "damage.snot_size");
        }
        if (init)
        {
            damage.hand_radius = 0.5f;
            auto_tweak::load_param<F32, F32>(damage.hand_radius, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.hand_radius");
        }
        if (init)
        {
            damage.slime_width = 1.0f;
            auto_tweak::load_param<F32, F32>(damage.slime_width, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "damage.slime_width");
        }
        if (init)
        {
            damage.slime_time = 6.0f;
            auto_tweak::load_param<F32, F32>(damage.slime_time, 1.0f, 0.0f, 20.0f, ap, apsize,
                                             "damage.slime_time");
        }
        if (init)
        {
            wipe.delay = 1.2f;
            auto_tweak::load_param<F32, F32>(wipe.delay, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wipe.delay");
        }
        if (init)
        {
            wipe.duration = 0.3f;
            auto_tweak::load_param<F32, F32>(wipe.duration, 1.0f, 0.0f, 10.0f, ap, apsize,
                                             "wipe.duration");
        }
        if (init)
        {
            wipe.rate_mult = 2.0f;
            auto_tweak::load_param<F32, F32>(wipe.rate_mult, 1.0f, 0.0f, 100.0f, ap, apsize,
                                             "wipe.rate_mult");
        }
        if (init)
        {
            wipe.yoffset = 0.0f;
            auto_tweak::load_param<F32, F32>(wipe.yoffset, 1.0f, -10.0f, 10.0f, ap, apsize,
                                             "wipe.yoffset");
        }
        if (init)
        {
            death.wind_duration = 5.0f;
            auto_tweak::load_param<F32, F32>(death.wind_duration, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "death.wind_duration");
        }
        if (init)
        {
            death.wink_duration = 1.0f;
            auto_tweak::load_param<F32, F32>(death.wink_duration, 1.0f, 0.01f, 100.0f, ap, apsize,
                                             "death.wink_duration");
        }
        if (init)
        {
            death.start_y = -2.0f;
            auto_tweak::load_param<F32, F32>(death.start_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "death.start_y");
        }
        if (init)
        {
            death.end_y = 7.0f;
            auto_tweak::load_param<F32, F32>(death.end_y, 1.0f, -100.0f, 100.0f, ap, apsize,
                                             "death.end_y");
        }
        if (init)
        {
            death.wind_min = 2.0f;
            auto_tweak::load_param<F32, F32>(death.wind_min, 1.0f, 0.0f, 1000000000.0f, ap, apsize,
                                             "death.wind_min");
        }
        if (init)
        {
            death.wind_kill_dist = 2.0f;
            auto_tweak::load_param<F32, F32>(death.wind_kill_dist, 1.0f, 0.01f, 1000000000.0f, ap,
                                             apsize, "death.wind_kill_dist");
        }
        if (init)
        {
            death.wind_mag_up = 0.0f;
            auto_tweak::load_param<F32, F32>(death.wind_mag_up, 1.0f, -1000000000.0f, 1000000000.0f,
                                             ap, apsize, "death.wind_mag_up");
        }
        if (init)
        {
            death.wind_mag_right = 10.0f;
            auto_tweak::load_param<F32, F32>(death.wind_mag_right, 1.0f, -1000000000.0f,
                                             1000000000.0f, ap, apsize, "death.wind_mag_right");
        }
        if (init)
        {
            sound[SOUND_BEAM].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].volume, 1.0f, 0.0f, 1.0f, ap, apsize,
                                             "sound[SOUND_BEAM].volume");
        }
        if (init)
        {
            sound[SOUND_BEAM].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BEAM].range_inner");
        }
        if (init)
        {
            sound[SOUND_BEAM].range_outer = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_BEAM].range_outer");
        }
        if (init)
        {
            sound[SOUND_BEAM].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_BEAM].delay");
        }
        if (init)
        {
            sound[SOUND_BEAM].fade_time = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BEAM].fade_time, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_BEAM].fade_time");
        }
        if (init)
        {
            sound[SOUND_FLAME].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_FLAME].volume");
        }
        if (init)
        {
            sound[SOUND_FLAME].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].range_inner");
        }
        if (init)
        {
            sound[SOUND_FLAME].range_outer = 20.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].range_outer");
        }
        if (init)
        {
            sound[SOUND_FLAME].delay = 0.2f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_FLAME].delay");
        }
        if (init)
        {
            sound[SOUND_FLAME].fade_time = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_FLAME].fade_time, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_FLAME].fade_time");
        }
        if (init)
        {
            sound[SOUND_VAPOR].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_VAPOR].volume");
        }
        if (init)
        {
            sound[SOUND_VAPOR].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].range_inner, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].range_inner");
        }
        if (init)
        {
            sound[SOUND_VAPOR].range_outer = 30.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].range_outer, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].range_outer");
        }
        if (init)
        {
            sound[SOUND_VAPOR].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].delay, 1.0f, 0.0f, 100000.0f, ap,
                                             apsize, "sound[SOUND_VAPOR].delay");
        }
        if (init)
        {
            sound[SOUND_VAPOR].fade_time = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_VAPOR].fade_time, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_VAPOR].fade_time");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_HIGH_HUMM].volume");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].range_inner = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].range_inner");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].range_outer = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].range_outer");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].delay = 0.1f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].delay, 1.0f, 0.0f, 100000.0f,
                                             ap, apsize, "sound[SOUND_HIGH_HUMM].delay");
        }
        if (init)
        {
            sound[SOUND_HIGH_HUMM].fade_time = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_HIGH_HUMM].fade_time, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_HIGH_HUMM].fade_time");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].volume = 0.5f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_BIZARRE].volume");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].range_inner = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_BIZARRE].range_inner");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].range_outer = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_BIZARRE].range_outer");
        }
        if (init)
        {
            sound[SOUND_BIZARRE].delay = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_BIZARRE].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_BIZARRE].delay");
        }

        if (init)
        {
            sound[SOUND_MORE_BIZARRE].volume = 1.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].volume, 1.0f, 0.0f, 1.0f, ap,
                                             apsize, "sound[SOUND_MORE_BIZARRE].volume");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].range_inner = 10.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].range_inner, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_MORE_BIZARRE].range_inner");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].range_outer = 40.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].range_outer, 1.0f, 0.0f,
                                             100000.0f, ap, apsize,
                                             "sound[SOUND_MORE_BIZARRE].range_outer");
        }
        if (init)
        {
            sound[SOUND_MORE_BIZARRE].delay = 0.0f;
            auto_tweak::load_param<F32, F32>(sound[SOUND_MORE_BIZARRE].delay, 1.0f, 0.0f, 10.0f, ap,
                                             apsize, "sound[SOUND_MORE_BIZARRE].delay");
        }
    }
} // namespace

void zNPCDutchman::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();

    psy_instinct = bmgr->Subscribe(this, 0);

    xPsyche* psy = psy_instinct;

    psy->BrainBegin();

    for (S32 i = NPC_GOAL_DUTCHMANNIL; i <= NPC_GOAL_DUTCHMANDEATH; i++)
    {
        psy->AddGoal(i, this);
    }

    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_DUTCHMANIDLE);
}

void zNPCDutchman::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
{
    xPsyche* psy = this->psy_instinct;
    psy->GIDOfActive();
}

U32 zNPCDutchman::AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 index = -1;
    U32 animID = 0;

    switch (rawgoal)
    {
    case NPC_GOAL_DUTCHMANNIL:
    case NPC_GOAL_DUTCHMANDAMAGE:
    case NPC_GOAL_DUTCHMANDEATH:
        index = -1;
        break;
    case NPC_GOAL_DUTCHMANINITIATE:
    case NPC_GOAL_DUTCHMANIDLE:
    case NPC_GOAL_DUTCHMANDISAPPEAR:
    case NPC_GOAL_DUTCHMANTELEPORT:
        index = 1;
        break;
    case NPC_GOAL_DUTCHMANREAPPEAR:
        index = 5;
        break;
    case NPC_GOAL_DUTCHMANBEAM:
        index = 0xC;
        break;
    case NPC_GOAL_DUTCHMANFLAME:
        index = 0x10;
        break;
    case NPC_GOAL_DUTCHMANPOSTFLAME:
        if (flag.hurting != false)
        {
            index = 4;
        }
        else
        {
            index = 6;
        }
        break;
    case NPC_GOAL_DUTCHMANCAUGHT:
        index = 0x13;
        break;

    default:
        index = 1;
        break;
    }

    if (index > -1)
    {
        animID = g_hash_subbanim[index];
    }

    return animID;
}

void zNPCDutchman::LassoNotify(en_LASSO_EVENT event)
{
    switch (event)
    {
    case LASS_EVNT_BEGIN:
        break;
    case LASS_EVNT_GRABSTART:
        psy_instinct->GoalSet(NPC_GOAL_DUTCHMANCAUGHT, 1);
        break;
    case LASS_EVNT_GRABEND:
        break;
    }

    zNPCCommon::LassoNotify(event);
}

S32 zNPCDutchman::LassoSetup()
{
    zNPCCommon::LassoUseGuides(1, 1);
    return zNPCCommon::LassoSetup();
}

void zNPCDutchman::update_round()
{
    S32 roundCntr = round;
    if (life == 0)
    {
        round = 3;
    }
    else
    {
        round = 2 - ((life + -1) * 3) / 3;
    }
    if (round == roundCntr)
    {
        return;
    }

    stage = -1;
}

S32 zNPCDutchman::next_goal()
{
    stage++;

    if (sequence[round][stage].goal == 0)
    {
        stage = 0;
    }

    delay = 0.0f;

    return sequence[round][stage].goal;
}

F32 zNPCDutchman::goal_delay()
{
    return sequence[round][stage].delay;
}

void zNPCDutchman::decompose()
{
    if (flag.fighting)
    {
        flag.fighting = false;
        disable_emitter(*dissolve_emitter);
        disable_emitter(*fadein_emitter);
        disable_emitter(*fadeout_emitter);
        zCameraEnableTracking(CO_BOSS);
        boss_cam.stop();
    }
}

namespace
{
    void set_yaw_matrix(xMat3x3& mat, F32 dt)
    {
        F32 tempSin;
        F32 tempCos;

        tempSin = isin(dt);
        tempCos = icos(dt);
        mat.right.assign(tempCos, 0.0f, -tempSin);
        mat.up.assign(0.0f, 1.0f, 0.0f);
        mat.at.assign(tempSin, 0.0f, tempCos);
    }

    void update_move_follow(xVec3& loc, zNPCDutchman::move_info& move, const xMat3x3& mat, F32 dt)
    {
        xVec3 offset = move.dest - loc;

        xMat3x3LMulVec(&offset, &mat, &offset);

        xVec3 dloc = { 0.0f, 0.0f, 0.0f };

        xAccelMove(dloc.x, move.vel.x, move.accel.x, dt, offset.x, move.max_vel.x);
        xAccelMove(dloc.y, move.vel.y, move.accel.y, dt, offset.y, move.max_vel.y);
        xAccelMove(dloc.z, move.vel.z, move.accel.z, dt, offset.z, move.max_vel.z);

        xMat3x3RMulVec(&dloc, &mat, &dloc);

        loc += dloc;
    }

    void update_move_accel(xVec3& loc, zNPCDutchman::move_info& move, F32 dt)
    {
        loc += (move.accel * ((0.5f * dt) * dt)) + (move.vel * dt);
        move.vel += move.accel * dt;
    }

    void update_move_vel(xVec3& loc, zNPCDutchman::move_info& move, F32 dt)
    {
        loc += move.vel * dt;
    }

    void update_move_stop(xVec3& loc, zNPCDutchman::move_info& move, F32 dt)
    {
        xAccelStop(loc.x, move.vel.x, move.accel.x, dt);
        xAccelStop(loc.y, move.vel.y, move.accel.y, dt);
        xAccelStop(loc.z, move.vel.z, move.accel.z, dt);
    }
} // namespace

void zNPCDutchman::update_turn(F32 dt)
{
    const xVec3& loc3 = get_center();
    xVec2 start_dir = { 0.0f, 0.0f };

    start_dir.x = model->Mat->at.x;
    start_dir.y = model->Mat->at.z;

    if (turning())
    {
        F32 start = xatan2(start_dir.x, start_dir.y);
        F32 end = xatan2(turn.dir.x, turn.dir.y);
        F32 diff = end - start;

        if (diff > PI)
        {
            diff -= 2.0f * PI;
        }
        else if (diff < -PI)
        {
            diff += 2.0f * PI;
        }

        F32 yaw = start;

        xAccelMove(yaw, turn.vel, turn.accel, dt, yaw + diff, turn.max_vel);
        set_yaw_matrix(frame->mat, yaw);
    }
}

void zNPCDutchman::update_move(F32 dt)
{
    switch (flag.move)
    {
    case MOVE_FOLLOW:
        update_move_follow(frame->mat.pos, move, frame->mat, dt);
        break;
    case MOVE_ACCEL:
        update_move_accel(frame->mat.pos, move, dt);
        break;
    case MOVE_VEL:
        update_move_vel(frame->mat.pos, move, dt);
        break;
    case MOVE_STOP:
        update_move_stop(frame->mat.pos, move, dt);
        break;
    }
}

void zNPCDutchman::render_debug()
{
}

void zNPCDutchman::update_animation(F32)
{
}

void zNPCDutchman::update_camera(F32 dt)
{
    zCameraDisableTracking(CO_BOSS);
    if ((zCameraIsTrackingDisabled() & ~8) == 0)
    {
        boss_cam.update(dt);
    }
}

namespace
{
    U8 clip_outside_circle(F32& out, const xVec2& origin, const xVec2& dir, F32 d1, F32 d2,
                           const xVec2& center, F32 r)
    {
        F32 r2 = r * r;
        F32 len = d2 - d1;
        xVec2 offset = dir * len;
        xVec2 g = origin + (dir * d1);
        xVec2 h = g + offset;
        xVec2 dh = h - center;
        F32 a = dh.length2();

        if (a <= r2)
        {
            return FALSE;
        }

        xVec2 dg = g - center;

        if (dg.length2() > r2)
        {
            out = d1;
            return TRUE;
        }

        F32 len2 = len * len;
        F32 b = 2.0f * offset.dot(dh);
        F32 d = b * b - (4.0f * len2) * (a - r2);

        if (d < 0.0f)
        {
            return FALSE;
        }

        out = (0.5f / len2) * (-b + xsqrt(d));

        return TRUE;
    }

    U8 clip_outside_circle(F32& out, const xVec3& origin, const xVec3& dir, F32 d1, F32 d2,
                           const xVec3& center, F32 r)
    {
        xVec2 origin2 = { 0.0f, 0.0f };
        xVec2 dir2 = { 0.0f, 0.0f };
        xVec2 center2 = { 0.0f, 0.0f };

        origin2.x = origin.x;
        origin2.y = origin.z;
        dir2.x = dir.x;
        dir2.y = dir.z;
        center2.x = center.x;
        center2.y = center.z;

        return clip_outside_circle(out, origin2, dir2, d1, d2, center2, r);
    }
} // namespace

void zNPCDutchman::update_wave(zNPCDutchman::wave_data& wave, F32 dt)
{
    F32 old_dist = wave.dist;

    xAccelMove(wave.dist, wave.vel, tweak.flame.accel, dt, tweak.flame.max_vel);

    if (wave.clipped)
    {
        return;
    }

    F32 dist;

    if (clip_outside_circle(wave.clip_dist, wave.loc, wave.dir, old_dist, wave.dist, get_orbit(),
                            tweak.ground_radius))
    {
        wave.clipped = TRUE;
        dist = wave.clip_dist;

        if (wave.sound_handle != 0)
        {
            kill_sound(1, wave.sound_handle);
            wave.sound_handle = 0;
        }
    }
    else
    {
        dist = wave.dist;
    }

    F32 frac = 1.0f - (dist * flames.imax_dist) * tweak.flame.decay;
    F32 diff = dist - old_dist;
    xVec3 tan = { 0.0f, 0.0f, 0.0f };

    tan.x = wave.dir.z;
    tan.z = -wave.dir.x;

    for (S32 i = 0; i < 3; i++)
    {
        xParEmitterPropsAsset& prop = *flame_emitter[i]->prop;
        F32 old_life[2] = { 0.0f, 0.0f };
        F32 old_size_birth[2] = { 0.0f, 0.0f };
        F32 old_size_death[2] = { 0.0f, 0.0f };

        old_life[0] = prop.life.val[0];
        old_life[1] = prop.life.val[1];
        old_size_birth[0] = prop.size_birth.val[0];
        old_size_birth[1] = prop.size_birth.val[1];
        old_size_death[0] = prop.size_death.val[0];
        old_size_death[1] = prop.size_death.val[1];

        prop.life.val[0] *= frac;
        prop.life.val[1] *= frac;
        prop.size_birth.val[0] *= frac;
        prop.size_birth.val[1] *= frac;
        prop.size_death.val[0] *= frac;
        prop.size_death.val[1] *= frac;

        S32 emit = (S32)(dist * tweak.flame.emit_rate[i]) + 1;

        while (wave.emitted[i] < emit)
        {
            F32 dist0 = diff * xurand() + old_dist;
            F32 dist1 = tweak.flame.emit_width[i] * (xurand() - 0.5f);

            flame_emitter_settings.pos = (wave.loc + wave.dir * dist0) + tan * dist1;

            emit_particles(*flame_emitter[i], FRAME_TIME, flame_emitter_settings);

            wave.emitted[i]++;
        }

        prop.life.val[0] = old_life[0];
        prop.life.val[1] = old_life[1];
        prop.size_birth.val[0] = old_size_birth[0];
        prop.size_birth.val[1] = old_size_birth[1];
        prop.size_death.val[0] = old_size_death[0];
        prop.size_death.val[1] = old_size_death[1];
    }
}

void zNPCDutchman::init_wave(zNPCDutchman::wave_data& wave, const xVec3& loc, const xVec3& dir)
{
    wave.clipped = FALSE;
    wave.loc = loc + (dir * tweak.flame.start_dist);
    wave.dir = dir;
    wave.dist = 0.0f;
    wave.vel = 0.0f;
    wave.sound_loc = wave.loc;
    wave.sound_handle = play_sound(1, &wave.sound_loc, 1.0f);
    wave.emitted[0] = 0;
    wave.emitted[1] = 0;
    wave.emitted[2] = 0;
}

void zNPCDutchman::kill_wave(zNPCDutchman::wave_data& wave)
{
    kill_sound(1, wave.sound_handle);
}

void zNPCDutchman::start_eye_glow()
{
    flag.eye_glow = true;
    eye_glow.size = 1;
}

void zNPCDutchman::stop_eye_glow()
{
    flag.eye_glow = false;
}

void zNPCDutchman::update_eye_glow(F32 dt)
{
    if (flag.eye_glow)
    {
        xVec3 offset = get_facing() * tweak.beam.glow_dist;

        for (S32 i = 0; i < 2; i++)
        {
            xParEmitterAsset& ea = *eyeglow_emitter[i]->tasset;
            xParEmitterPropsAsset& prop = *eyeglow_emitter[i]->prop;

            ea.pos = get_eye_loc(i) + offset;

            F32 old_size_birth[2] = { 0.0f, 0.0f };
            F32 old_size_death[2] = { 0.0f, 0.0f };

            old_size_birth[0] = prop.size_birth.val[0];
            old_size_birth[1] = prop.size_birth.val[1];
            old_size_death[0] = prop.size_death.val[0];
            old_size_death[1] = prop.size_death.val[1];

            prop.size_birth.val[0] *= eye_glow.size;
            prop.size_birth.val[1] *= eye_glow.size;
            prop.size_death.val[0] *= eye_glow.size;
            prop.size_death.val[1] *= eye_glow.size;

            emit_particles(*eyeglow_emitter[i], dt);

            prop.size_birth.val[0] = old_size_birth[0];
            prop.size_birth.val[1] = old_size_birth[1];
            prop.size_death.val[0] = old_size_death[0];
            prop.size_death.val[1] = old_size_death[1];
        }
    }
}

void zNPCDutchman::start_hand_trail()
{
    flag.hand_trail = true;

    for (S32 i = 0; i < 2; i++)
    {
        hand_trail.loc[i] = get_hand_loc(i);
    }
}

void zNPCDutchman::stop_hand_trail()
{
    flag.hand_trail = false;
}

void zNPCDutchman::update_hand_trail(F32 dt)
{
    if (flag.hand_trail)
    {
        xParEmitterAsset& ea = *hand_trail_emitter->tasset;

        ea.emit_type = eParEmitterLine;
        ea.e_line.radius = tweak.teleport.trail_width;

        for (S32 i = 0; i < 2; i++)
        {
            ea.e_line.pos1 = hand_trail.loc[i];
            hand_trail.loc[i] = get_hand_loc(i);
            ea.e_line.pos2 = hand_trail.loc[i];

            emit_particles(*hand_trail_emitter, dt);
        }
    }
}

void zNPCDutchman::dissolve(F32 delay)
{
    F32 volume;
    if (delay <= 0.0f)
    {
        flag.fade = FADE_TELEPORT;
        disable_emitter(*fadeout_emitter);
        set_alpha(0.0f);
        vanish();
        volume = 1.0f;
    }
    else
    {
        flag.fade = FADE_DISSOLVE;
        fade.time = 0.0f;
        fade.duration = delay;
        fade.iduration = 1.0f / fade.duration;
        enable_emitter(*fadeout_emitter);
        set_alpha(1.0f);
        reappear();
        volume = 0.0f;
    }
    enable_emitter(*dissolve_emitter);
    start_eye_glow();
    start_hand_trail();

    if (fade.sound_handle == 0)
    {
        fade.sound_handle = play_sound(2, &bound.sph.center, volume);
    }
    else
    {
        set_volume(2, fade.sound_handle, volume);
    }
}

void zNPCDutchman::coalesce(F32 delay)
{
    reappear();
    if (delay <= 0.0f)
    {
        flag.fade = FADE_NONE;
        disable_emitter(*fadein_emitter);
        disable_emitter(*dissolve_emitter);
        set_alpha(1.0f);
        stop_eye_glow();
        stop_hand_trail();
        if (fade.sound_handle != 0)
        {
            kill_sound(2, fade.sound_handle);
            fade.sound_handle = 0;
        }
    }
    else
    {
        flag.fade = FADE_COALESCE;
        fade.time = 0.0f;
        fade.duration = delay;
        fade.iduration = 1.0f / fade.duration;
        enable_emitter(*fadein_emitter);
        enable_emitter(*dissolve_emitter);
        set_alpha(0.0f);
        start_eye_glow();
        start_hand_trail();
        if (fade.sound_handle != 0)
        {
            set_volume(2, fade.sound_handle, 1.0f);
        }
    }
}

void zNPCDutchman::reset_blob_mat()
{
    xMat3x3& mat = flames.blob_mat;
    F32 s = isin(tweak.flame.blob_pitch);
    F32 c = icos(tweak.flame.blob_pitch);

    mat.right.assign(1.0f, 0.0f, 0.0f);
    mat.up.assign(0.0f, c, s);
    mat.at.assign(0.0f, -s, c);
}

void zNPCDutchman::refresh_reticle()
{
    dutchman_reticle_center = xModelGetBoneLocation(*model, 47);
    dutchman_reticle_center.y += tweak.reticle_y;
}

void zNPCDutchman::reset_lasso_anim()
{
    xAnimPlaySetState(lassdata->grabGuideModel->Anim->Single, lassdata->grabGuideAnim, 0.0f);
}

void zNPCDutchman::update_fade(F32 dt)
{
    switch (flag.fade)
    {
    case FADE_DISSOLVE:
    {
        fade.time = fade.time + dt;

        if (fade.time >= fade.duration)
        {
            flag.fade = FADE_TELEPORT;
            disable_emitter(*fadeout_emitter);
            set_alpha(0.0f);
            vanish();
            set_volume(2, fade.sound_handle, 1.0f);
        }
        else
        {
            F32 frac = fade.time * fade.iduration;

            set_alpha(1.0f - frac);
            set_volume(2, fade.sound_handle, frac);
        }

        break;
    }
    case FADE_TELEPORT:
        break;
    case FADE_COALESCE:
    {
        fade.time = fade.time + dt;

        if (fade.time >= fade.duration)
        {
            flag.fade = FADE_NONE;
            disable_emitter(*fadein_emitter);
            disable_emitter(*dissolve_emitter);
            set_alpha(1.0f);
            stop_eye_glow();
            stop_hand_trail();
            reappear();
            kill_sound(2, fade.sound_handle);
            fade.sound_handle = 0;
        }
        else
        {
            F32 frac = fade.time * fade.iduration;

            set_alpha(frac);
            set_volume(2, fade.sound_handle, 1.0f - frac);
        }

        break;
    }
    }
}

void zNPCDutchman::update_slime(F32 dt)
{
    static_queue<slime_slice>::iterator it = slime.slices.begin();

    while (it != slime.slices.end())
    {
        slime_slice& slice = *it;

        slice.age += dt;

        if (slice.age > tweak.damage.slime_time)
        {
            slime.slices.erase(it, slime.slices.end());
            break;
        }

        ++it;
    }
}

void zNPCDutchman::add_slime(const xVec3& loc, F32 dt)
{
    slime_emitter_settings.pos = loc;

    emit_particles(*slime_emitter, dt, slime_emitter_settings);

    if (slime.slices.empty())
    {
        slime.origin.assign(loc.x, tweak.ground_y, loc.z);
        slime.dir.assign(move.dest.x - loc.x, 0.0f, move.dest.z - loc.z);
        slime.dir.normalize();

        slime.slices.push_front();

        slime_slice& slice = slime.slices.front();

        slice.age = 0.0f;
        slice.dist = 0.0f;
    }
    else
    {
        slime_slice& front = slime.slices.front();
        F32 dist2 = (loc - slime.origin).length2();
        F32 max_dist = 0.5f + front.dist;

        if (dist2 >= max_dist * max_dist)
        {
            if (slime.slices.full())
            {
                slime.slices.pop_back();
            }

            slime.slices.push_front();

            slime_slice& slice = slime.slices.front();

            slice.age = 0.0f;
            slice.dist = xsqrt(dist2);
        }
    }
}

void zNPCDutchman::add_spray(const xVec3& loc, F32 dt)
{
    const xVec3& facing = get_facing();
    xVec3 emit_loc = loc + (facing * tweak.flame.snot_dist);

    emit_loc.y += tweak.flame.snot_height;

    snot_emitter_settings.pos = emit_loc;
    snot_emitter_settings.vel = facing * tweak.flame.snot_vel;

    if (flames.time < tweak.flame.warm_up_time)
    {
        F32 frac = tweak.flame.sneeze_mult;
        xParEmitterPropsAsset& prop = *snot_emitter->prop;
        F32 old_rate[2] = { 0.0f, 0.0f };

        old_rate[0] = prop.rate.val[0];
        old_rate[1] = prop.rate.val[1];

        prop.rate.val[0] *= frac;
        prop.rate.val[1] *= frac;

        emit_particles(*snot_emitter, dt, snot_emitter_settings);

        prop.rate.val[0] = old_rate[0];
        prop.rate.val[1] = old_rate[1];
    }
    else
    {
        emit_particles(*snot_emitter, dt, snot_emitter_settings);
    }

    if (flames.time >= tweak.flame.warm_up_time)
    {
        xParEmitterAsset& ea = *blob_emitter->tasset;
        F32 velmag = ea.vel.y;

        ea.emit_type = eParEmitterLine;
        ea.e_line.radius = tweak.flame.spray_width;

        if (flames.blob_break)
        {
            ea.vel = 0.0f;
            ea.e_line.pos1 = ea.e_line.pos2 = flames.blob_loc = emit_loc;
            flames.blob_break = FALSE;
        }
        else
        {
            ea.vel = (emit_loc - flames.blob_loc) / dt;
            ea.e_line.pos1 = flames.blob_loc;
            flames.blob_loc = emit_loc;
            ea.e_line.pos2 = flames.blob_loc;

            F32 len2 = ea.vel.length2();

            if (len2 > velmag * velmag)
            {
                ea.vel *= velmag / xsqrt(len2);
            }
        }

        xVec3 extra_vel = facing * velmag;

        xMat3x3Rot(&flames.blob_mat, (xVec3*)&model->Mat->right, tweak.flame.blob_pitch);
        xMat3x3RMulVec(&extra_vel, &flames.blob_mat, &extra_vel);

        ea.vel += extra_vel;

        emit_particles(*blob_emitter, dt);

        ea.vel.y = velmag;
    }
}

void zNPCDutchman::add_splash(const xVec3&, F32)
{
}

void zNPCDutchman::update_flames(F32 dt)
{
    static_queue<wave_data>::iterator it = waves.begin();

    while (it != waves.end())
    {
        wave_data& wave = *it;

        update_wave(wave, dt);

        if (wave.dist >= tweak.ground_radius)
        {
            static_queue<wave_data>::iterator itp = it;

            while (itp != waves.end())
            {
                kill_wave(*itp);
                ++itp;
            }

            waves.erase(it, waves.end());
            break;
        }

        ++it;
    }

    if (flag.flaming)
    {
        flames.time += dt;

        const xVec3& facing = get_facing();
        xVec3 nose_loc = get_nose_loc();

        add_spray(nose_loc, dt);

        xVec3 ground_loc = { 0.0f, 0.0f, 0.0f };

        ground_loc.x = nose_loc.x + facing.x * tweak.flame.lead_dist;
        ground_loc.z = nose_loc.z + facing.z * tweak.flame.lead_dist;
        ground_loc.y = tweak.ground_y;

        const xVec3& orbit = get_orbit();
        xVec2 orbit_offset = { 0.0f, 0.0f };

        orbit_offset.x = ground_loc.x - orbit.x;
        orbit_offset.y = ground_loc.z - orbit.z;

        if (orbit_offset.length2() > tweak.ground_radius * tweak.ground_radius)
        {
            return;
        }

        add_slime(ground_loc, dt);
        add_splash(ground_loc, dt);

        S32 emit = (S32)(flames.time * tweak.flame.wave_rate) + 1;

        if (emit > flames.emitted)
        {
            flames.emitted = emit;

            xVec3 tan = { 0.0f, 0.0f, 0.0f };

            tan.z = -facing.x;
            tan.x = facing.z;

            if (waves.full())
            {
                kill_wave(waves.back());
                waves.pop_back();
            }

            waves.push_front();
            init_wave(waves.front(), ground_loc, tan);

            if (waves.full())
            {
                kill_wave(waves.back());
                waves.pop_back();
            }

            waves.push_front();
            init_wave(waves.front(), ground_loc, -tan);
        }
    }
}

void zNPCDutchman::start_fight()
{
    if (!flag.fighting)
    {
        if (life > 0)
        {
            flag.fighting = true;

            psy_instinct->GoalSet(NPC_GOAL_DUTCHMANINITIATE, 1);
            zCameraDisableTracking(CO_BOSS);
            boss_cam.start(globals.camera);
            boss_cam.set_targets((xVec3&)globals.player.ent.model->Mat->pos, bound.sph.center,
                                 bound.sph.r);
        }
    }
}

void zNPCDutchman::set_life(S32 lf)
{
    S32 old_life = life;

    life = range_limit<S32>(lf, 0, 3);

    if (life < old_life)
    {
        flag.hurting = true;

        for (S32 i = life; i < old_life; i++)
        {
            zEntEvent(this, this, eEventNPCHPDecremented);
        }
    }
}

void zNPCDutchman::start_beam()
{
    if (flag.beaming)
    {
        return;
    }

    flag.beaming = true;
    flag.was_beaming = false;
    beam[1].segments = 0;
    beam[0].segments = 0;
}

void zNPCDutchman::stop_beam()
{
    flag.beaming = false;
}

void zNPCDutchman::set_alpha(F32 a)
{
    alpha = a;

    F32 model_alpha = a * tweak.alpha;

    for (xModelInstance* m = model; m != NULL; m = m->Next)
    {
        if (model_alpha < 1.0f)
        {
            m->Flags |= 0x4000;
        }
        else
        {
            m->Flags &= 0xbfff;
        }

        m->Alpha = model_alpha;
    }
}

void zNPCDutchman::start_flames()
{
    flag.flaming = true;
    flames.time = 0.0f;
    flames.emitted = 0;
    flames.blob_break = TRUE;
    flames.splash_break = TRUE;
    slime.slices.clear();
}

void zNPCDutchman::stop_flames()
{
    flag.flaming = false;
}

U8 zNPCDutchman::check_player_damage()
{
    if (globals.player.cheat_mode != 0)
    {
        return FALSE;
    }

    const xSphere& o = globals.player.ent.bound.sph;

    if (flag.beaming)
    {
        for (S32 which = 0; which < 2; which++)
        {
            beam_info& b = beam[which];

            for (U32 i = 0; i < b.segments; i++)
            {
                if (xSphereHitsCapsule(o, b.start_loc, b.end[i].loc, tweak.damage.beam_radius))
                {
                    return TRUE;
                }

                if (xSphereHitsSphere(o.center, o.r, b.end[i].loc, tweak.damage.beam_blast_radius))
                {
                    return TRUE;
                }
            }
        }
    }

    for (static_queue<wave_data>::iterator it = waves.begin(); it != waves.end(); ++it)
    {
        wave_data& wave = *it;
        xBox box;
        xMat4x3 mat;

        F32 frac =
            tweak.damage.flame_size.y * (1.0f - (wave.dist * flames.imax_dist) * tweak.flame.decay);

        box.upper.x = 0.5f * tweak.damage.flame_size.x;
        box.upper.y = frac;
        box.lower.x = -(0.5f * tweak.damage.flame_size.x);
        box.lower.y = 0.0f;
        box.upper.z = 0.0f;
        box.lower.z = -tweak.damage.flame_size.z;

        look_at(mat, wave.dir);
        mat.pos = wave.loc + (wave.dir * wave.dist);

        if (xSphereHitsOBB(o, box, mat))
        {
            return TRUE;
        }
    }

    if (flag.hand_trail)
    {
        for (S32 i = 0; i < 2; i++)
        {
            if (xSphereHitsSphere(o.center, o.r, hand_trail.loc[i], tweak.damage.hand_radius))
            {
                return TRUE;
            }
        }
    }

    if (flag.flaming)
    {
        xBox box;
        xMat4x3 mat;

        box.upper.x = 0.5f * tweak.damage.snot_size.x;
        box.upper.y = tweak.damage.snot_size.y;
        box.lower.x = -(0.5f * tweak.damage.snot_size.x);
        box.lower.y = 0.0f;
        box.upper.z = tweak.damage.snot_size.z;
        box.lower.z = 0.0f;

        look_at(mat, get_facing());
        mat.pos = get_nose_loc();
        mat.pos.y = tweak.ground_y;

        if (xSphereHitsOBB(o, box, mat))
        {
            return TRUE;
        }
    }

    if (slime.slices.size() > 1)
    {
        xBox box;
        xMat4x3 mat;

        box.upper.x = 0.5f * tweak.damage.slime_width;
        box.lower.x = -(0.5f * tweak.damage.slime_width);
        box.upper.y = 0.01f;
        box.lower.y = 0.0f;
        box.upper.z = slime.slices.front().dist;
        box.lower.z = slime.slices.back().dist;

        look_at(mat, slime.dir);
        mat.pos = slime.origin;

        if (xSphereHitsOBB(o, box, mat))
        {
            return TRUE;
        }
    }

    return FALSE;
}

xVec3 zNPCDutchman::get_eye_loc(S32 index) const
{
    static const U32 lookup[] = { 10, 13 };

    return xModelGetBoneLocation(*model, lookup[index]);
}

xVec3 zNPCDutchman::get_hand_loc(S32 index) const
{
    static const U32 lookup[] = { 32, 40 };

    return xModelGetBoneLocation(*model, lookup[index]);
}

xVec3 zNPCDutchman::get_splash_loc() const
{
    const xVec3& facing = get_facing();
    xVec3 nose = get_nose_loc();
    xVec3 loc = { 0.0f, 0.0f, 0.0f };

    loc.x = nose.x + facing.x * tweak.flame.lead_dist;
    loc.y = tweak.ground_y;
    loc.z = nose.z + facing.z * tweak.flame.lead_dist;

    return loc;
}

void zNPCDutchman::vanish()
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

void zNPCDutchman::reappear()
{
    moreFlags = old.moreFlags;
    xNPCBasic::RestoreColFlags();
    xEntShow(this);
}

xVec3 zNPCDutchman::random_orbit(const xVec3& loc, F32 min_ang, F32 max_ang) const
{
    const xVec3& orbit = get_orbit();
    xVec3 offset = loc - orbit;
    F32 ang;
    F32 len2 = offset.length2();

    if (len2 >= -0.00001f && len2 <= 0.00001f)
    {
        ang = 0.0f;
    }
    else
    {
        F32 imag = 1.0f / xsqrt(len2);

        ang = xatan2(offset.x * imag, offset.z * imag);
    }

    if (max_ang > PI)
    {
        max_ang = PI;
    }

    F32 rand_ang = ((max_ang - min_ang) * xurand()) + min_ang;

    if ((xrand() >> 13) & 1)
    {
        rand_ang *= -1.0f;
    }

    F32 total = ang + rand_ang;

    xVec3 dest = orbit;

    dest.x += tweak.orbit_radius * isin(total);
    dest.z += tweak.orbit_radius * icos(total);

    return dest;
}

void zNPCDutchman::turn_to_face(const xVec3& loc)
{
    flag.face_player = false;

    const xVec3& center = get_center();
    xVec2 dir = { 0.0f, 0.0f };

    dir.x = loc.x - center.x;
    dir.y = loc.z - center.z;

    F32 len2 = dir.length2();

    if (!(len2 >= -0.00001f && len2 <= 0.00001f))
    {
        dir *= 1.0f / xsqrt(len2);
        turn.dir = dir;
    }
}

void zNPCDutchman::reset_speed()
{
    turn.accel = tweak.turn_accel;
    turn.max_vel = tweak.turn_max_vel;
    move.accel = tweak.accel * tweak.speed_mult[round];
    move.max_vel = tweak.max_vel * tweak.speed_mult[round];
}

void zNPCDutchman::halt(F32 decel)
{
    flag.move = MOVE_STOP;

    move.accel.x = (move.vel.x < 0.0f) ? decel : -decel;
    move.accel.y = (move.vel.y < 0.0f) ? decel : -decel;
    move.accel.z = (move.vel.z < 0.0f) ? decel : -decel;
}

namespace auto_tweak
{
    template <>
    void load_param<F32, F32>(F32& value, F32 scale, F32 min, F32 max, xModelAssetParam* ap,
                              U32 apsize, const char* name)
    {
        value = zParamGetFloat(ap, apsize, name, value);

        if (value < min)
        {
            value = min;
        }
        else if (value > max)
        {
            value = max;
        }

        value *= scale;
    }

    template <>
    void load_param<S32, S32>(S32& value, S32 scale, S32 min, S32 max, xModelAssetParam* ap,
                              U32 apsize, const char* name)
    {
        S32 result = zParamGetInt(ap, apsize, name, value);

        if (result < min)
        {
            result = min;
        }
        else if (result > max)
        {
            result = max;
        }

        value = result * scale;
    }

    template <>
    void load_param<xVec3, S32>(xVec3& value, S32, S32, S32, xModelAssetParam* ap, U32 apsize,
                                const char* name)
    {
        zParamGetVector(ap, apsize, name, value, &value);
    }
} // namespace auto_tweak

namespace
{
    void set_vert(RxObjSpace3DVertex&, const xVec3&, F32, F32, U8);

    void set_beam_verts(RxObjSpace3DVertex* vert, const xVec3& loc0, const xVec3& loc1, U8 a0,
                        U8 a1, const xVec3& half_right)
    {
        set_vert(vert[0], loc0 - half_right, 0.0f, 0.0f, a0);
        set_vert(vert[1], loc1 - half_right, 1.0f, 0.0f, a1);
        set_vert(vert[2], loc0 + half_right, 0.0f, 1.0f, a0);

        vert[3] = vert[2];
        vert[4] = vert[1];

        set_vert(vert[5], loc1 + half_right, 1.0f, 1.0f, a1);
    }

    void set_vert(RxObjSpace3DVertex& vert, const xVec3& loc, F32 u, F32 v, U8 alpha)
    {
        vert.x = loc.x;
        vert.y = loc.y;
        vert.z = loc.z;
        vert.u = u;
        vert.v = v;
        vert.r = 255;
        vert.g = 255;
        vert.b = 255;
        vert.a = alpha;
    }

    xVec3 world_to_screen(const xVec3& loc)
    {
        iCameraUpdatePos(globals.camera.lo_cam, &globals.camera.mat);

        xMat4x3& view_mat = (xMat4x3&)globals.camera.lo_cam->viewMatrix;
        xVec3 cam_loc;

        xMat4x3Toworld(&cam_loc, &view_mat, &loc);

        xVec3 screen_loc;
        F32 iz = 1.0f / cam_loc.z;

        screen_loc.assign(cam_loc.x * iz, cam_loc.y * iz, 1.0f);

        return screen_loc;
    }

    RxObjSpace3DVertex* render_beam(RxObjSpace3DVertex* vert, const zNPCDutchman::beam_info& beam,
                                    u32 which, U8 alpha)
    {
        const xVec3& start_loc = beam.start_loc;
        const xVec3& end_loc = beam.end[which].loc;
        xVec3 dir = (end_loc - start_loc).normal();
        xVec3 start_screen_loc = world_to_screen(start_loc);
        xVec3 end_screen_loc = world_to_screen(end_loc);
        xVec3 screen_dir = end_screen_loc - start_screen_loc;

        screen_dir.z = 0.0f;
        screen_dir.up_normalize();

        xVec3 screen_right = { 0.0f, 0.0f, 0.0f };

        screen_right.x = screen_dir.y;
        screen_right.y = -screen_dir.x;

        xVec3 right;

        xMat3x3LMulVec(&right, (xMat3x3*)&globals.camera.lo_cam->viewMatrix, &screen_right);
        right.right_normalize();

        xVec3 half_right = right * (0.5f * beam.thickness);

        set_beam_verts(vert, start_loc, end_loc, alpha, alpha, half_right);

        if (!beam.end[which].extend)
        {
            return vert + 6;
        }

        set_beam_verts(vert + 6, end_loc, start_loc + (dir * tweak.beam.fade_dist), alpha, 0,
                       half_right);

        return vert + 12;
    }

    RxObjSpace3DVertex* render_beam(RxObjSpace3DVertex* vert, const zNPCDutchman::beam_info& beam)
    {
        U8 alpha = (S32)(0.5f + (255.0f * beam.alpha) / (F32)beam.segments);
        u32 segments = beam.segments;

        for (u32 i = 0; i < segments; i++)
        {
            vert = render_beam(vert, beam, i, alpha);
        }

        return vert;
    }
} // namespace

void zNPCDutchman::render_beam()
{
    U32 total = beam[0].segments + beam[1].segments;
    RxObjSpace3DVertex* verts =
        (RxObjSpace3DVertex*)xMemPushTemp(total * (12 * sizeof(RxObjSpace3DVertex)));

    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, laser_raster);

    RxObjSpace3DVertex* last = ::render_beam(verts, beam[0]);

    last = ::render_beam(last, beam[1]);

    RwIm3DTransform(verts, last - verts, NULL,
                    rwIM3D_VERTEXUV | rwIM3D_VERTEXXYZ | rwIM3D_VERTEXRGBA);
    RwIm3DRenderPrimitive(rwPRIMTYPETRILIST);
    RwIm3DEnd();

    xMemPopTemp(verts);
}

void zNPCDutchman::render_halo()
{
    const xMat4x3& mat = globals.camera.mat;
    xVec3 right;
    xVec3 up;
    xVec3 at;
    xVec3 center;

    at = mat.at * -tweak.halo.scale;
    up = mat.up * tweak.halo.scale;
    right = mat.right * -tweak.halo.scale;
    center = get_chest_loc();

    center.y += tweak.halo.yoffset;
}

xFactoryInst* zNPCGoalDutchmanNil::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanNil(who, (zNPCDutchman&)*info);
}

xFactoryInst* zNPCGoalDutchmanInitiate::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanInitiate(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanInitiate::Enter(F32 dt, void* updCtxt)
{
    const xVec3& end_loc = owner.get_orbit();
    const xVec3& loc = *owner.nav_curr->PosGet();

    xVec3& floc = (xVec3&)owner.model->Mat->pos;

    floc = owner.frame->mat.pos = loc;

    xVec2 offset = { 0.0f, 0.0f };

    offset.x = loc.x - end_loc.x;
    offset.y = loc.z - end_loc.z;

    F32 len2 = offset.length2();

    if (len2 < 0.001f)
    {
        owner.move.dest.x = end_loc.x;
        owner.move.dest.z = end_loc.z + tweak.orbit_radius;
    }
    else
    {
        F32 scale = tweak.orbit_radius / xsqrt(len2);

        owner.move.dest.x = offset.x * scale + end_loc.x;
        owner.move.dest.z = offset.y * scale + end_loc.z;
    }

    owner.move.dest.y = end_loc.y;

    owner.dissolve(0.0f);
    owner.face_player();

    owner.flag.move = zNPCDutchman::MOVE_FOLLOW;
    owner.turn.vel = tweak.initiate.turn_vel;
    owner.turn.accel = tweak.initiate.turn_accel;
    owner.move.vel.assign(0.0f, tweak.initiate.up_vel, 0.0f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanInitiate::Exit(F32 dt, void* updCtxt)
{
    owner.turn.accel = tweak.turn_accel;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanInitiate::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.move.vel.length2() < 0.01f &&
        (owner.move.dest - owner.get_center()).length2() < 0.01f && !owner.turning(0.2f))
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_DUTCHMANREAPPEAR;
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanIdle::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanIdle(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanIdle::Enter(F32 dt, void* updCtxt)
{
    owner.face_player();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanIdle::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.delay >= owner.goal_delay())
    {
        *trantype = GOAL_TRAN_SET;
        return owner.next_goal();
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanDisappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDisappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDisappear::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;
    owner.dissolve(tweak.teleport.fade_time);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanDisappear::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDisappear::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.delay >= tweak.teleport.fade_time)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_DUTCHMANTELEPORT;
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanTeleport::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanTeleport(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanTeleport::Enter(F32 dt, void* updCtxt)
{
    owner.turn.accel = tweak.teleport.turn_accel;
    owner.turn.max_vel = tweak.teleport.turn_max_vel;
    owner.move.accel = tweak.teleport.accel;
    owner.move.max_vel = tweak.teleport.max_vel;
    owner.move.dest = owner.random_orbit(owner.get_center(), PI / 2.0f, PI);

    owner.turn_to_face(owner.move.dest);

    owner.flag.move = zNPCDutchman::MOVE_FOLLOW;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanTeleport::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanTeleport::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.move.vel.length2() < 0.01f &&
        (owner.move.dest - owner.get_center()).length2() < 0.01f)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_DUTCHMANREAPPEAR;
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanReappear::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanReappear(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanReappear::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;

    owner.face_player();
    owner.coalesce(tweak.teleport.fade_time);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanReappear::Exit(F32 dt, void* updCtxt)
{
    owner.reset_speed();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanReappear::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xAnimState* anim = owner.AnimCurState();

    if (anim->ID != g_hash_subbanim[5] || dt > owner.AnimTimeRemain(NULL))
    {
        *trantype = GOAL_TRAN_SET;
        return owner.next_goal();
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanBeam::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanBeam(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanBeam::Enter(F32 dt, void* updCtxt)
{
    substate = SS_STOP;
    shots = 0;

    xVec3 player_loc;

    zEntPlayer_PredictPos(&player_loc, tweak.beam.focus_time, 1.0f, 1);

    owner.turn_to_face(player_loc);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanBeam::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanBeam::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    switch (substate)
    {
    case SS_STOP:
        update_stop(dt);
        break;
    case SS_FOCUS:
        update_focus(dt);
        break;
    case SS_FIRE:
        update_fire(dt);
        break;
    case SS_UNFOCUS:
        update_unfocus(dt);
        break;
    case SS_DONE:
        *trantype = GOAL_TRAN_SET;
        return owner.next_goal();
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

void zNPCGoalDutchmanBeam::update_stop(F32 dt)
{
    if (!owner.turning())
    {
        substate = SS_FOCUS;

        owner.delay = 0.0f;
        owner.beam[0].alpha = 0.0f;
        owner.beam[0].thickness = tweak.beam.thickness;
        beam[0].ribbon_flags = 1;
        owner.beam[1].alpha = 0.0f;
        owner.beam[1].thickness = tweak.beam.thickness;
        beam[1].ribbon_flags = 1;

        owner.start_beam();

        for (S32 i = 0; i < 2; i++)
        {
            beam[i].impact_sound = play_sound(0, &beam[i].loc, owner.beam[i].alpha);
            beam[i].glow_sound = play_sound(3, &owner.beam[i].start_loc, 1.0f);
        }
    }
}

void zNPCGoalDutchmanBeam::update_focus(F32 dt)
{
    xVec3 target;

    predict_target(target);

    owner.turn_to_face(target);

    aim_beam(beam[0], target, 0.0f);
    refresh_beam(0);
    aim_beam(beam[1], target, PI);
    refresh_beam(1);

    F32 frac = owner.delay / tweak.beam.focus_time;
    F32 frac2 = frac * frac;

    if (frac >= 1.0f)
    {
        owner.beam[0].alpha = 1.0f;
        owner.beam[1].alpha = 1.0f;
        owner.delay = 0.0f;

        substate = SS_FIRE;
    }
    else
    {
        owner.beam[0].alpha = frac2;
        owner.beam[1].alpha = frac2;

        set_volume(0, beam[0].impact_sound, owner.beam[0].alpha);
        set_volume(0, beam[1].impact_sound, owner.beam[1].alpha);
    }
}

void zNPCGoalDutchmanBeam::update_fire(F32 dt)
{
    update_beam(dt, beam[0], 0);
    update_beam(dt, beam[1], 1);

    if (beam[0].vel >= -0.00001f && beam[0].vel <= 0.00001f &&
        xabs(beam[0].dist / tweak.beam.end_dist - 1.0f) <= 0.00001f && beam[1].vel >= -0.00001f &&
        beam[1].vel <= 0.00001f && xabs(beam[1].dist / tweak.beam.end_dist - 1.0f) <= 0.00001f)
    {
        owner.delay = 0.0f;
        substate = SS_UNFOCUS;

        for (S32 i = 0; i < 2; i++)
        {
            kill_sound(3, beam[i].glow_sound);
        }
    }
}

void zNPCGoalDutchmanBeam::update_unfocus(F32 dt)
{
    F32 frac = 1.0f - owner.delay / tweak.beam.focus_time;
    F32 frac2 = frac * frac;

    if (frac <= 0.0f)
    {
        owner.stop_beam();

        shots++;

        substate = (shots < tweak.beam.shots[owner.round]) ? SS_STOP : SS_DONE;

        kill_sound(0, beam[0].impact_sound);
        kill_sound(0, beam[1].impact_sound);
    }
    else
    {
        owner.beam[0].alpha = frac2;
        owner.beam[1].alpha = frac2;

        set_volume(0, beam[0].impact_sound, owner.beam[0].alpha);
        set_volume(0, beam[1].impact_sound, owner.beam[1].alpha);
    }
}

void zNPCGoalDutchmanBeam::aim_beam(beam_data& data, const xVec3& target, F32 offset) const
{
    const tweak_group& tw = tweak;
    const xVec3& center = owner.get_center();

    data.origin.assign(center.x, center.z);
    data.dir.assign(target.x - center.x, target.z - center.z);

    F32 len2 = data.dir.length2();

    if (len2 >= -0.00001f && len2 <= 0.00001f)
    {
        data.dir.assign(1.0f, 0.0f);
    }
    else
    {
        data.dir *= 1.0f / xsqrt(len2);
    }

    data.dist = tw.beam.start_dist;
    data.vel = 0.0f;
    data.wave_offset = offset;
}

void zNPCGoalDutchmanBeam::calc_beam_loc(xVec2& loc, F32 dist, const beam_data& data) const
{
    const beam_config& cfg = tweak.beam;
    F32 frac = (dist - cfg.start_dist) / (cfg.end_dist - cfg.start_dist);
    F32 wave_mag = frac * (cfg.wave_max - cfg.wave_min) + cfg.wave_min;
    F32 wave_offset = wave_mag * isin(2.0f * PI * (frac * cfg.wave_freq) + data.wave_offset);
    xVec2 dir_tan = { 0.0f, 0.0f };

    dir_tan.x = data.dir.y;
    dir_tan.y = -data.dir.x;

    loc = (data.origin + data.dir * dist) + dir_tan * wave_offset;
}

void zNPCGoalDutchmanBeam::update_beam(F32 dt, beam_data& beam, S32 which)
{
    const beam_config& cfg = tweak.beam;

    start_effects(which, dt);

    F32 dist = beam.dist;
    F32 vel = beam.vel;

    xAccelMove(dist, vel, cfg.accel, dt, cfg.end_dist, cfg.max_vel);

    F32 diff = dist - beam.dist;
    F32 ddt = dt;

    if (diff >= 1.5f * tweak.beam.segment_width)
    {
        S32 iterations = (S32)(0.5f + diff / tweak.beam.segment_width) - 1;

        if (iterations > 15)
        {
            iterations = 15;
        }

        F32 d = 1.0f / (iterations + 1);
        F32 ddist = d * diff;

        ddt = d * ddt;

        for (S32 i = 0; i < iterations; i++)
        {
            beam.dist += ddist;

            refresh_beam(which);
            add_effects(which, ddt);
        }
    }

    beam.dist = dist;
    beam.vel = vel;

    refresh_beam(which);
    add_effects(which, ddt);
}

void zNPCGoalDutchmanBeam::refresh_beam(S32 which)
{
    xVec2 loc;

    calc_beam_loc(loc, beam[which].dist, beam[which]);

    beam[which].loc.assign(loc.x, tweak.ground_y, loc.y);
}

void zNPCGoalDutchmanBeam::start_effects(S32 which, F32 dt)
{
    owner.beam[which].start_loc = owner.get_eye_loc(which);
    owner.beam[which].segments = 0;

    xParEmitterAsset& ea = *eyeglow_emitter[which]->tasset;

    ea.pos = owner.beam[which].start_loc;
    ea.pos.x += tweak.beam.glow_dist * beam[which].dir.x;
    ea.pos.z += tweak.beam.glow_dist * beam[which].dir.y;

    owner.emit_particles(*eyeglow_emitter[which], dt);
}

void zNPCGoalDutchmanBeam::add_miss_effects(S32 which, F32 dt)
{
    beam[which].ribbon_flags = 1;

    zNPCDutchman::beam_end& end = owner.beam[which].end[owner.beam[which].segments];

    end.extend = TRUE;
    end.loc = beam[which].loc;

    owner.beam[which].segments++;
}

void zNPCGoalDutchmanBeam::add_blast_effects(S32 which, F32 dt)
{
    zNPCDutchman::beam_end& end = owner.beam[which].end[owner.beam[which].segments];

    end.extend = FALSE;
    end.loc = beam[which].loc;

    owner.beam[which].segments++;

    eye_scorch[which].insert(beam[which].loc, 0.0f, 1.0f, 1.0f, beam[which].ribbon_flags);

    beam[which].ribbon_flags = 0;

    plasma_emitter_settings.pos = beam[which].loc;
    owner.emit_particles(*plasma_emitter, dt, plasma_emitter_settings);

    spark_emitter_settings.pos = beam[which].loc;
    owner.emit_particles(*spark_emitter, dt, spark_emitter_settings);

    light_emitter_settings.pos = beam[which].loc;
    light_emitter_settings.rate.set((2.0f / FRAME_TIME) * tweak.beam.light_rate);
    owner.emit_particles(*light_emitter, FRAME_TIME, light_emitter_settings);
}

void zNPCGoalDutchmanBeam::add_effects(S32 which, F32 dt)
{
    xVec3 offset = beam[which].loc - owner.get_orbit();
    F32 max_dist = 0.01f + tweak.ground_radius;

    if (offset.length2() > max_dist * max_dist)
    {
        add_miss_effects(which, dt);
    }
    else
    {
        add_blast_effects(which, dt);
    }
}

void zNPCGoalDutchmanBeam::predict_target(xVec3& target) const
{
    const xVec3& player_loc = (xVec3&)globals.player.ent.model->Mat->pos;
    xVec3 offset = player_loc - owner.get_center();
    F32 len2 = offset.length2();
    F32 minmag = tweak.beam.start_dist;
    F32 limit = minmag * minmag;

    if (len2 <= 0.001f + limit)
    {
        target = player_loc;
    }
    else
    {
        F32 t = xAccelMoveTime(xsqrt(len2) - minmag, tweak.beam.accel, tweak.beam.end_dist,
                               tweak.beam.max_vel);

        zEntPlayer_PredictPos(&target, t, 1.0f, 1);
    }
}

xFactoryInst* zNPCGoalDutchmanFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanFlame(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanFlame::Enter(F32 dt, void* updCtxt)
{
    owner.reset_lasso_anim();
    owner.turn_to_face(owner.get_orbit());

    owner.delay = 0.0f;
    substate = SS_WAIT;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanFlame::Exit(F32 dt, void* updCtxt)
{
    owner.flg_vuln &= ~0x1000000;

    owner.stop_flames();
    owner.stop_hand_trail();

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanFlame::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    switch (substate)
    {
    case SS_WAIT:
        update_wait(dt);
        break;
    case SS_MOVE:
        update_move(dt);
        break;
    case SS_STOP:
        update_stop(dt);
        break;
    case SS_DONE:
        *trantype = GOAL_TRAN_SET;
        return owner.next_goal();
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

void zNPCGoalDutchmanFlame::update_wait(F32 dt)
{
    if (owner.delay < tweak.flame.start_delay)
    {
        return;
    }

    if (!owner.turning())
    {
        substate = SS_MOVE;

        owner.move.accel = tweak.accel;
        owner.move.max_vel = tweak.max_vel;

        const xVec3& orbit = owner.get_orbit();
        xVec3& dest = owner.move.dest;

        dest = orbit - (dest - orbit);

        move_dir.assign(dest.x - orbit.x, dest.z - orbit.z);
        move_dir.normalize();

        owner.flag.move = zNPCDutchman::MOVE_FOLLOW;
        stopped = FALSE;

        owner.turn_to_face(dest);
        owner.start_flames();
        owner.start_hand_trail();
    }
}

void zNPCGoalDutchmanFlame::update_move(F32 dt)
{
    if (!stopped)
    {
        xVec3 splash_loc = owner.get_splash_loc();
        const xVec3& orbit = owner.get_orbit();
        xVec2 orbit_offset = { 0.0f, 0.0f };

        orbit_offset.x = splash_loc.x - orbit.x;
        orbit_offset.y = splash_loc.z - orbit.z;

        if (orbit_offset.dot(move_dir) > tweak.ground_radius)
        {
            owner.AnimStart(g_hash_subbanim[ANIM_Attack02End01], 0);
            owner.flg_vuln &= ~0x1000000;

            owner.stop_flames();
            owner.stop_hand_trail();

            owner.move.accel = tweak.teleport.accel;
            owner.move.max_vel = tweak.teleport.max_vel;

            stopped = TRUE;
        }
        else
        {
            refresh_vulnerability();
        }
    }

    if (owner.move.vel.length2() < 0.01f &&
        (owner.move.dest - owner.get_center()).length2() < 0.01f)
    {
        substate = SS_STOP;

        owner.face_player();

        if (!stopped)
        {
            owner.AnimStart(g_hash_subbanim[ANIM_Attack02End01], 0);
            owner.flg_vuln &= ~0x1000000;

            owner.stop_flames();
            owner.stop_hand_trail();
        }
    }
}

void zNPCGoalDutchmanFlame::update_stop(F32 dt)
{
    U8 anim_done = FALSE;

    if (g_hash_subbanim[ANIM_Attack02End01] != owner.AnimCurState()->ID ||
        dt > owner.AnimTimeRemain(NULL))
    {
        anim_done = TRUE;
    }

    if (anim_done && !owner.turning(0.1f) &&
        (owner.move.dest - owner.get_center()).length2() < 0.01f)
    {
        substate = SS_DONE;
        owner.flag.face_player = false;
    }
}

void zNPCGoalDutchmanFlame::refresh_vulnerability()
{
    const xVec3& loc = owner.get_center();
    F32 orbit_dist2 = (loc - owner.get_orbit()).length2();
    F32 max_orbit_dist = tweak.orbit_radius - tweak.lasso.safety_dist;

    if (orbit_dist2 >= max_orbit_dist * max_orbit_dist)
    {
        owner.flg_vuln &= ~0x1000000;
        return;
    }

    const xVec3& player_loc = (xVec3&)globals.player.ent.model->Mat->pos;
    xVec3 player_offset = loc - player_loc;
    F32 player_dist2 = player_offset.length2();

    if (owner.flg_vuln & 0x1000000)
    {
        F32 min_dist2 = tweak.lasso.min_dist_disable * tweak.lasso.min_dist_disable;

        if (player_dist2 < min_dist2)
        {
            owner.flg_vuln &= ~0x1000000;
            return;
        }

        F32 ang = angle_difference(owner.turn.dir, xVec2::create(player_offset.x, player_offset.z));

        if (ang > tweak.lasso.max_angle_disable)
        {
            owner.flg_vuln &= ~0x1000000;
        }
    }
    else
    {
        F32 min_dist2 = tweak.lasso.min_dist_enable * tweak.lasso.min_dist_enable;

        if (player_dist2 >= min_dist2)
        {
            F32 ang =
                angle_difference(owner.turn.dir, xVec2::create(player_offset.x, player_offset.z));

            if (xabs(ang) <= tweak.lasso.max_angle_enable)
            {
                owner.flg_vuln |= 0x1000000;
            }
        }
    }
}

namespace
{
    F32 angle_difference(const xVec2& a, const xVec2& b)
    {
        F32 base = xatan2(a.x, a.y);

        return xrmod(PI + (xatan2(b.x, b.y) - base)) - PI;
    }
} // namespace

xFactoryInst* zNPCGoalDutchmanPostFlame::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanPostFlame(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanPostFlame::Enter(F32 dt, void* updCtxt)
{
    if (owner.life <= 0.0f)
    {
        if (globals.player.Health != 0 && !(globals.player.ControlOff & 4))
        {
            zEntEvent(&owner, &owner, eEventDeath);
        }
    }

    owner.delay = 0.0f;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanPostFlame::Exit(F32 dt, void* updCtxt)
{
    owner.flag.hurting = false;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanPostFlame::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xAnimState* anim = owner.AnimCurState();

    if (anim->ID == g_hash_subbanim[ANIM_Idle01])
    {
        owner.update_round();

        *trantype = GOAL_TRAN_SET;

        if (owner.life <= 0)
        {
            return NPC_GOAL_DUTCHMANDEATH;
        }

        return owner.next_goal();
    }

    if (owner.flag.hurting && owner.delay >= tweak.wipe.delay &&
        owner.delay <= tweak.wipe.delay + tweak.wipe.duration)
    {
        owner.get_facing();

        xVec3 emit_loc = owner.get_hand_loc(1);

        emit_loc.y += tweak.wipe.yoffset;

        snot_emitter_settings.pos = emit_loc;
        snot_emitter_settings.vel = 0.0f;

        xParEmitterPropsAsset& prop = *snot_emitter->prop;
        F32 old_rate[2] = { 0.0f, 0.0f };

        old_rate[0] = prop.rate.val[0];
        old_rate[1] = prop.rate.val[1];

        prop.rate.val[0] *= tweak.wipe.rate_mult;
        prop.rate.val[1] *= tweak.wipe.rate_mult;

        owner.emit_particles(*snot_emitter, dt, snot_emitter_settings);

        prop.rate.val[0] = old_rate[0];
        prop.rate.val[1] = old_rate[1];
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanCaught::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanCaught(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanCaught::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;
    owner.halt(tweak.lasso.decel);

    play_sound(4, &owner.bound.sph.center, 1.0f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanCaught::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanCaught::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    owner.LassoSyncAnims(LASS_ANIM_GRAB);

    xAnimState* anim = owner.AnimCurState();

    if (owner.delay >= tweak.lasso.escape_delay || anim->ID != g_hash_subbanim[ANIM_LassoGrab01] ||
        dt > owner.AnimTimeRemain(NULL))
    {
        owner.set_life(owner.life - 1);

        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_DUTCHMANDAMAGE;
    }

    owner.flag.face_player = false;

    const xVec3& player_loc = (xVec3&)globals.player.ent.model->Mat->pos;
    const xVec3& center = owner.get_center();

    owner.turn.dir.assign(center.x - player_loc.x, center.z - player_loc.z);
    owner.turn.dir.normalize();

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanDamage::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDamage(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDamage::Enter(F32 dt, void* updCtxt)
{
    owner.LassoNotify(LASS_EVNT_ENDED);
    owner.dissolve(tweak.teleport.fade_time);

    owner.turn.accel = tweak.teleport.turn_accel;
    owner.turn.max_vel = tweak.teleport.turn_max_vel;
    owner.move.accel = tweak.teleport.accel;
    owner.move.max_vel = tweak.teleport.max_vel;
    owner.flag.move = zNPCDutchman::MOVE_FOLLOW;

    xVec2 off = owner.turn.dir * tweak.orbit_radius;

    owner.move.dest = owner.get_orbit();
    owner.move.dest.x += off.x;
    owner.move.dest.z += off.y;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanDamage::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDamage::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xAnimState* anim = owner.AnimCurState();

    if (anim->ID == g_hash_subbanim[ANIM_LassoGrab01])
    {
        owner.LassoSyncAnims(LASS_ANIM_GRAB);
    }

    if (owner.move.vel.length2() < 0.01f &&
        (owner.move.dest - owner.get_center()).length2() < 0.01f)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_DUTCHMANREAPPEAR;
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

xFactoryInst* zNPCGoalDutchmanDeath::create(S32 who, RyzMemGrow* grow, void* info)
{
    return new (who, grow) zNPCGoalDutchmanDeath(who, (zNPCDutchman&)*info);
}

S32 zNPCGoalDutchmanDeath::Enter(F32 dt, void* updCtxt)
{
    owner.delay = 0.0f;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Exit(F32 dt, void* updCtxt)
{
    xVec3& up = (xVec3&)owner.model->Mat[1].up;

    up.assign(0.0f, 1.0f, 0.0f);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalDutchmanDeath::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    if (owner.delay >= 2.0f)
    {
        owner.decompose();
        owner.vanish();
    }
    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

U8 zNPCDutchman::PhysicsFlags() const
{
    return 3;
}

U8 zNPCDutchman::ColPenByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColChkByFlags() const
{
    return 16;
}

U8 zNPCDutchman::ColPenFlags() const
{
    return 0;
}

U8 zNPCDutchman::ColChkFlags() const
{
    return 0;
}

WEAK void zNPCDutchman::face_player()
{
    flag.face_player = true;
}
