#include "zNPCTypePrawn.h"

#include "rwcore.h"
#include "xDebug.h"

#include "xMemMgr.h"
#include "zEntCruiseBubble.h"
#include "zNPCTypeCommon.h"
#include "zRenderState.h"
#include <types.h>

#define f1052 1.0f
#define f1053 0.0f
#define f1454 0.2f
#define f1455 0.1f

#define ANIM_Unknown 0 // 0x0
#define ANIM_Idle01 1 // 0x04
#define ANIM_Idle02 2 // 0x08
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

        void load(xModelAssetParam* p, U32 i);
        void register_tweaks(bool init, xModelAssetParam* ap, U32 apsiz, const char* c);
    }; // namespace tweak_group

    static tweak_group tweak;

    void init_sound()
    {
    }

    void kill_sound(S32, U32)
    {
    }

    struct television
    {
        RwCamera* cam;
        RwRaster* raster;
        RwRaster* bgraster;
        RpWorld* world;
        RwTexture* texture;
        U32 vert_buffer_used;
        RwRGBA bgcolor;
        F32 rcz;
        F32 w;
        F32 h;

        bool create(S32, S32);
        void destroy();
        void set_background(iColor_tag);
        void set_model_texture(xModelInstance&);
        void update(xModelInstance&, xLightKit*);
        void render_static();
        void render_background();
        void set_vert(rwGameCube2DVertex&, F32, F32, F32, F32);
        void move(const xVec3&, const xVec3&);
    };

    bool television::create(S32 width, S32 height)
    {
        cam = NULL;
        raster = NULL;
        bgraster = NULL;
        world = NULL;
        memset(&bgcolor, 0x0, sizeof(bgcolor));

        w = (float)width;
        h = (float)height;
        cam = RwCameraCreate();
        if (cam == NULL)
        {
            destroy();
            return FALSE;
        }

        RwBBox worldBbox;
        worldBbox.sup.z = 100000.f;
        worldBbox.sup.y = 100000.f;
        worldBbox.sup.x = 100000.f;

        worldBbox.inf.z = -100000.f;
        worldBbox.inf.y = -100000.f;
        worldBbox.inf.x = -100000.f;

        world = RpWorldCreate(&worldBbox);
        if (world == NULL)
        {
            destroy();
            return FALSE;
        }

        RpWorldAddCamera(world, cam);
        _rwObjectHasFrameSetFrame(cam, RwFrameCreate());

        xVec2 windowSize;
        windowSize.x = 1.0;
        windowSize.y = 1.0;
        RwCameraSetViewWindow(cam, (const RwV2d*)&windowSize);
        RwCameraSetProjection(cam, rwPERSPECTIVE);

        if (cam->object.object.parent == NULL)
        {
            destroy();
            return FALSE;
        }

        raster =
            RwRasterCreate(width, height, 32, rwRASTERGAMMACORRECTED | rwRASTERPIXELLOCKEDWRITE);
        if (raster == NULL)
        {
            destroy();
            return FALSE;
        }
        cam->frameBuffer = raster;
        if (cam == NULL)
        {
            destroy();
            return FALSE;
        }
        texture = RwTextureCreate(raster);
        if (texture == NULL)
        {
            destroy();
            return FALSE;
        }
        texture->filterAddressing = (texture->filterAddressing & 0xFFFFFF00) | rwFILTERLINEAR;

        RwCameraSetNearClipPlane(cam, 0.3f);
        RwCameraSetFarClipPlane(cam, 10000.0f);

        return TRUE;
    }

    void television::destroy()
    {
        if (texture != NULL)
        {
            RwTextureDestroy(texture);
        }
        else if (raster != NULL)
        {
            RwRasterDestroy(raster);
        }
        if (cam != NULL)
        {
            RwFrame* cam_frame = (RwFrame*)cam->object.object.parent;
            if (cam_frame != NULL)
            {
                _rwObjectHasFrameSetFrame(cam, NULL);
                RwFrameDestroy(cam_frame);
            }
            RpWorldRemoveCamera(world, cam);
            RwCameraDestroy(cam);
        }
        if (world != NULL)
        {
            RpWorldDestroy(world);
        }
        cam = NULL;
        raster = NULL;
        world = NULL;
    }

    void television::set_background(iColor_tag color)
    {
        this->bgraster = 0;
        this->bgcolor.red = color.r;
        this->bgcolor.green = color.g;
        this->bgcolor.blue = color.b;
        this->bgcolor.alpha = color.a;
    }

    void television::set_model_texture(xModelInstance& model)
    {
        for (S32 bucketSlot = 0; bucketSlot < 2; bucketSlot++)
        {
            RpGeometry* modelGeometry = model.Bucket[bucketSlot]->Data->geometry;
            if (modelGeometry == 0 || modelGeometry->matList.numMaterials <= 0)
            {
                break;
            }
            RpMaterialSetTexture(modelGeometry->matList.materials[0], this->texture);
        }
    }

    void television::update(xModelInstance& model_inst, xLightKit* light_kit)
    {
        RwCamera* globalCamera = (RwCamera*)(RwEngineInstance->curCamera);
        if (globalCamera != NULL)
        {
            RwCameraEndUpdate(globalCamera);
            RwGameCubeCameraTextureFlush(globalCamera->frameBuffer, 0);
        }
        if (this->bgraster == NULL)
        {
            RwCameraClear(this->cam, &this->bgcolor, rwCAMERACLEARIMAGE | rwCAMERACLEARZ);
        }
        else
        {
            RwCameraClear(this->cam, &this->bgcolor, rwCAMERACLEARZ);
        }
        RwCameraBeginUpdate(this->cam);
        if (this->bgraster != NULL)
        {
            render_background();
        }
        zRenderState(SDRS_Default);

        if (light_kit != NULL)
        {
            xLightKit_Enable(light_kit, this->world);
        }
        xModelInstance* currentInstance = &model_inst;

        while (currentInstance != NULL)
        {
            if (currentInstance->Flags & 1)
            {
                iModelRender(currentInstance->Data, currentInstance->Mat);
            }
            currentInstance = currentInstance->Next;
        }
        if (light_kit != NULL)
        {
            // Doesn't use light_kit, but does a nullcheck?
            xLightKit_Enable(NULL, this->world);
        }
        render_static();
        RwCameraEndUpdate(this->cam);
        RwGameCubeCameraTextureFlush(this->cam->frameBuffer, 0);
        if (globalCamera != NULL)
        {
            RwCameraBeginUpdate(globalCamera);
        }
    }


    void television::render_static()
    {
    }

    void television::render_background()
    {
        zRenderState(SDRS_Fill);
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, this->bgraster);
    }

    void television::set_vert(rwGameCube2DVertex& vert, F32 x, F32 y, F32 u, F32 v)
    {
        vert.x = x;
        vert.y = y;
        vert.z = 1.0f;
        vert.u = u;
        vert.v = v;
        vert.emissiveColor.red = 0xff;
        vert.emissiveColor.green = 0xff;
        vert.emissiveColor.blue = 0xff;
        vert.emissiveColor.alpha = 0xff;
    }

    void television::move(const xVec3& v1, const xVec3& v2)
    {
        RwFrameTranslate((RwFrame*)this->cam->object.object.parent, (const RwV3d*)&v1,
                         rwCOMBINEREPLACE);
        xMat3x3LookAt((xMat3x3*)this->cam->object.object.parent, &v2, &v1);
    }

    static television closeup;

    xBinaryCamera boss_cam;

    S32 load_patterns(xModelAssetParam*, U32, const char*, zNPCPrawn::range_type*, S32);
} // namespace

void tweak_group::load(xModelAssetParam* p, U32 i)
{
    this->register_tweaks(TRUE, p, i, 0);
}

/*

TODO: 42%, needs quite a bit of work still.
Thought this function was going to be an easy copy/paste like other register_tweak fn,
but turning out to be harder to decipher than I anticipated so leaving it like this for now.
*/
void tweak_group::register_tweaks(bool init, xModelAssetParam* ap, U32 apsize, const char* c)
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

void aqua_beam::load(const aqua_beam::config& c, U32 i)
{
    void* a = xSTFindAsset(i, 0);
    aqua_beam::load(c, *(RpAtomic*)a);
}

void aqua_beam::load(const aqua_beam::config& c, RpAtomic& a)
{
    ring.model_data = &a;
    cfg = c;
    ring.queue.reset();
}

void aqua_beam::reset()
{
    firing = 0;
    bool tempBvar;

    while (!(tempBvar = ring.queue.empty()))
    {
        aqua_beam::kill_ring();
    }
    ring_sounds = 0;
}

void aqua_beam::start()
{
    firing = 1;
    time = 0.0f;
    ring.emit_time = -1000000000.0f;
}

void aqua_beam::stop()
{
    firing = 0;
}

void aqua_beam::update(F32 dt)
{
    time += dt;
    if ((cfg.duration >= 0.0f) && (time >= cfg.duration))
    {
        firing = 0;
    }
    update_rings(dt);
}

void aqua_beam::emit_ring()
{
    if (!ring.queue.full())
    {
        kill_ring();
    }
    ring.queue.push_front();
}

void aqua_beam::render()
{
    fixed_queue<aqua_beam::ring_segment, 31>::iterator entry = ring.queue.begin();
    while (entry != ring.queue.end())
    {
        render_ring(*entry);
        ++entry;
    }
}

void render_ring(aqua_beam::ring_segment& segment)
{
}

void aqua_beam::kill_ring()
{
    aqua_beam::ring_segment& back = ring.queue.back();
    xModelInstanceFree(back.model);

    if (back.sound_handle != 0)
    {
        kill_sound(3, back.sound_handle);
    }
    ring.queue.pop_back();
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

void zNPCPrawn::Init(xEntAsset* a)
{
    boss_cam.init();
    init_sound();
    zNPCCommon::Init(a);
    memset(&this->flag, 0, 1);
    this->flg_move = 1;
    this->flg_vuln = 0x11;
    this->chkby = 0x10;
    this->penby = 0x10;
    this->beam.load(this->beam.cfg, xStrHash("glow_ring_add.dff"));
    closeup.create(0x100, 0x100);
}

void zNPCPrawn::Destroy()
{
    zNPCCommon::Destroy();
    closeup.destroy();
}

void zNPCPrawn::NewTime(xScene* xscn, float dt)
{
    zNPCCommon::NewTime(xscn, dt);
    zNPCPrawn::render_closeup();
}

void zNPCPrawn::Damage(en_NPC_DAMAGE_TYPE damage_type, xBase* base, const xVec3* vec)
{
    S32 active_id = this->psy_instinct->GIDOfActive();
    switch (damage_type)
    {
    case DMGTYP_BOULDER:
    case DMGTYP_BUBBOWL:
        if (active_id == NPC_GOAL_PRAWNBOWL)
        {
            set_life(this->life - 1);
        }
        break;
    default:
        break;
    }
}

void zNPCPrawn::ParseINI()
{
    zNPCCommon::ParseINI();
    tweak.load(this->parmdata, this->pdatsize);
    tweak.turn_accel = zParamGetFloat(this->parmdata, this->pdatsize, "turn_accel", 5.0f);
    tweak.spawn_delay = zParamGetFloat(this->parmdata, this->pdatsize, "spawn_delay", 1.0f);
    tweak.repel_radius = zParamGetFloat(this->parmdata, this->pdatsize, "repel_radius", 4.2f);
    tweak.safe.pattern.min = zParamGetInt(this->parmdata, this->pdatsize, "safe.pattern.min", 0);
    tweak.safe.pattern.max = zParamGetInt(this->parmdata, this->pdatsize, "safe.pattern.max", 0);
    tweak.begin.pattern.min = zParamGetInt(this->parmdata, this->pdatsize, "begin.pattern.min", 0);
    tweak.begin.pattern.max = zParamGetInt(this->parmdata, this->pdatsize, "begin.pattern.max", 1);
    tweak.begin.state_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "begin.state_delay", 0.0f);
    tweak.begin.transition_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "begin.transition_delay", 1.0f);
    tweak.beam.delay[0] = zParamGetFloat(this->parmdata, this->pdatsize, "beam.delay[0]", 2.5f);
    tweak.beam.delay[1] = zParamGetFloat(this->parmdata, this->pdatsize, "beam.delay[1]", 4.5f);
    tweak.beam.delay[2] = zParamGetFloat(this->parmdata, this->pdatsize, "beam.delay[2]", 6.5f);
    tweak.beam.pattern.min = zParamGetInt(this->parmdata, this->pdatsize, "beam.pattern.min", 3);
    tweak.beam.pattern.max = zParamGetInt(this->parmdata, this->pdatsize, "beam.pattern.max", 0x13);
    tweak.beam.state_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.state_delay", 0.05f);
    tweak.beam.transition_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.transition_delay", 0.05f);
    tweak.beam.exhaust_vel =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.exhaust_vel", 15.0f);
    tweak.beam.knock_back = zParamGetFloat(this->parmdata, this->pdatsize, "beam.knock_back", 1.0f);
    tweak.beam.sweep.amount[0] =
        zParamGetInt(this->parmdata, this->pdatsize, "beam.sweep.amount[0]", 2);
    tweak.beam.sweep.amount[1] =
        zParamGetInt(this->parmdata, this->pdatsize, "beam.sweep.amount[1]", 3);
    tweak.beam.sweep.amount[2] =
        zParamGetInt(this->parmdata, this->pdatsize, "beam.sweep.amount[2]", 4);
    tweak.beam.sweep.arc = zParamGetFloat(this->parmdata, this->pdatsize, "beam.sweep.arc", 20.0f);
    tweak.beam.sweep.arc = zParamGetFloat(this->parmdata, this->pdatsize, "beam.sweep.delay", 0.5f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.sweep.accel", 60.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.sweep.max_vel", 26.5f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.size", 0.4f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.alpha", 1.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.vel", 9.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.accel", 10.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.emit_delay", 0.1f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.grow", 0.15f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.fade_dist", 15.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.kill_dist", 20.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.follow", 0.0f);
    tweak.beam.sweep.arc =
        zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.ring.hit_radius", 0.3f);
    tweak.beam.fire.ring.hit_offset =
        zParamGetVector(this->parmdata, this->pdatsize, "beam.fire.ring.hit_offset",
                        xVec3::create(0.0f, 0.0f, 0.0f), &tweak.beam.fire.ring.hit_offset);
    tweak.beam.fire.emit_bone =
        zParamGetInt(this->parmdata, this->pdatsize, "beam.fire.emit_bone", 0x2b);
    tweak.beam.fire.offset =
        zParamGetVector(this->parmdata, this->pdatsize, "beam.fire.offset",
                        xVec3::create(0.0f, 0.0f, 0.0f), &tweak.beam.fire.offset);
    tweak.beam.fire.yaw = zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.yaw", 0.0f);
    tweak.beam.fire.pitch = zParamGetFloat(this->parmdata, this->pdatsize, "beam.fire.pitch", 5.5f);
    isin(tweak.beam.fire.pitch);
    icos(tweak.beam.fire.pitch);
    tweak.aim_lane.duration =
        zParamGetFloat(this->parmdata, this->pdatsize, "aim_lane.duration", 2.0f);
    tweak.aim_lane.state_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "aim_lane.state_delay", 0.1f);
    tweak.aim_lane.transition_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "aim_lane.transition_delay", 0.1f);
    tweak.aim_lane.pattern.first =
        zParamGetInt(this->parmdata, this->pdatsize, "aim_lane.pattern.first", 0x15);
    tweak.aim_lane.pattern.range =
        zParamGetInt(this->parmdata, this->pdatsize, "aim_lane.pattern.range", 0x8);
    tweak.aim_lane.pattern.offset =
        zParamGetInt(this->parmdata, this->pdatsize, "aim_lane.pattern.offset", 0x9);
    tweak.aim_lane.pattern.size =
        zParamGetInt(this->parmdata, this->pdatsize, "aim_lane.pattern.size", 0x4);
    tweak.lane.duration[0] =
        zParamGetFloat(this->parmdata, this->pdatsize, "lane.duration[0]", 8.0f);
    tweak.lane.duration[1] =
        zParamGetFloat(this->parmdata, this->pdatsize, "lane.duration[1]", 7.0f);
    tweak.lane.duration[2] =
        zParamGetFloat(this->parmdata, this->pdatsize, "lane.duration[2]", 6.0f);
    tweak.lane.state_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "lane.state_delay", 0.0f);
    tweak.lane.transition_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "lane.transition_delay", 0.1f);
    tweak.lane.pattern.first =
        zParamGetInt(this->parmdata, this->pdatsize, "lane.pattern.first", 0x39);
    tweak.lane.pattern.range =
        zParamGetInt(this->parmdata, this->pdatsize, "lane.pattern.range", 0x8);
    tweak.lane.pattern.offset =
        zParamGetInt(this->parmdata, this->pdatsize, "lane.pattern.offset", 0x9);
    tweak.lane.pattern.size =
        zParamGetInt(this->parmdata, this->pdatsize, "lane.pattern.size", 0x4);
    tweak.danger.state_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "danger.state_delay", 0.2f);
    tweak.danger.transition_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "danger.transition_delay", 0.2f);
    tweak.danger.cycle_delay =
        zParamGetFloat(this->parmdata, this->pdatsize, "danger.cycle_delay", 6.0f);
    tweak.danger.pattern_offset =
        zParamGetInt(this->parmdata, this->pdatsize, "danger.pattern_offset", 0x5d);
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

void zNPCPrawn::Render()
{
    xNPCBasic::Render();
    isCulled = 0;
    beam.render();
    zNPCPrawn::render_debug();
}

void zNPCPrawn::update_round()
{
    S32 life = this->life;
    if (life == 0)
    {
        this->round = 3;
    }
    else
    {
        this->round = 2 - (S32)((life - 1) * 3) / this->cfg_npc->pts_damage;
    }
    S32 spawnerCount = sizeof(this->spawner) / sizeof(*this->spawner);
    for (S32 spawnerIndex = 0; spawnerIndex < spawnerCount; spawnerIndex++)
    {
        zNPCSpawner* current_spawner = this->spawner[spawnerIndex];
        if (current_spawner != NULL)
        {
            en_SM_NOTICES spawnerNotice = SM_NOTE_DUPRESUME;
            if (spawnerIndex > this->round)
            {
                spawnerNotice = SM_NOTE_DUPPAUSE;
            }
            current_spawner->Notify(spawnerNotice, NULL);
        }
    }
}

void zNPCPrawn::hide_model()
{
    xModelInstance* inst = this->model;
    while (inst != NULL)
    {
        inst->Flags &= 0xFFFC;
        inst = inst->Next;
    }
}

void zNPCPrawn::decompose()
{
    S32 spawnerIndex;
    zNPCSpawner* spawner;
    vanish();

    if (this->fighting != 0)
    {
        this->fighting = 0;
        set_floor_state(FS_SAFE, TRUE, TRUE);
        hide_model();
        spawnerIndex = 0;

        do
        {
            spawner = this->spawner[spawnerIndex];
            if (spawner != NULL)
            {
                spawner->Notify(SM_NOTE_DUPDEAD, NULL);
                spawner->Notify(SM_NOTE_KILLKIDS, NULL);
            }
            spawnerIndex++;
        } while (spawnerIndex < sizeof(this->spawner) / sizeof(*this->spawner));
        zCameraEnableTracking(CO_BOSS);
        boss_cam.stop();
    }
}

zNPCSpawner* zNPCPrawn::make_spawner(S32 i)
{
    zNPCSpawner* spawner = this->spawner[i];
    if (spawner != NULL)
    {
        return spawner;
    }
    this->spawner[i] = zNPCSpawner_GetInstance();
    this->spawner[i]->Subscribe(this);
    this->spawner[i]->SetWaveMode(SM_WAVE_CONTINUOUS, tweak.spawn_delay, -1);
    return this->spawner[i];
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
void zNPCPrawn::set_floor_state(zNPCPrawn::floor_state_enum arg0, bool arg1, bool arg2)
{
    U32 offset;
    U32 temp_r0;
    U32 temp_r3;
    z_disco_floor* temp_r4;

    if (((S32)arg0 != (S32)this->floor_state) || (arg2 != 0))
    {
        this->floor_state = (floor_state_enum)arg0;
        //get_floor_info(this, arg0, (zNPCPrawn::range_type *) &this->unk304, &this->unk30C, &this->unk310);
        if (arg1 != 0)
        {
            apply_pending();
            return;
        }
        temp_r4 = this->disco;
        temp_r3 = temp_r4->state;
        if ((temp_r3 < (U32)temp_r4->min_state ||
             (temp_r0 = temp_r4->max_state, ((temp_r3 > temp_r0) != 0))))
        {
            offset = 1;
        }
        else
        {
            offset = (temp_r0 - temp_r3) + 1;
        }
        this->pending.counter = temp_r4->state_counter + offset;
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

// void zNPCPrawn::reappear()
// {
// }
/* zNPCPrawn::reappear (void) */
void zNPCPrawn::reappear()
{
    xModelInstance* temp_r6;

    temp_r6 = this->model;
    temp_r6->Flags |= 3;
    this->flags |= 1;
    this->flags &= 0xBF;
    this->pflags = 0;
    this->moreFlags = 0x10;
    this->chkby = 0x10;
    this->penby = 0x10;
    this->flags2.flg_colCheck = 0;
    this->flags2.flg_penCheck = 0;
}

void zNPCPrawn::render_closeup()
{
}

bool zNPCGoalPrawnBeam::update_aim(F32 dt)
{
    zNPCPrawn& prawn = *((zNPCPrawn*)this->psyche->clt_owner);
    return !prawn.turning();
}

S32 zNPCGoalPrawnBeam::update_fire(F32 dt)
{
    zNPCPrawn& prawn = *((zNPCPrawn*)this->psyche->clt_owner);
    prawn.beam.start();
    prawn.delay = 0.0f;
    prawn.turn.accel = tweak.beam.sweep.accel;
    prawn.turn.max_vel = tweak.beam.sweep.max_vel;
    return 2;
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

xVec3& zNPCPrawn::get_center() const
{
    return reinterpret_cast<xVec3&>(this->model->Mat->pos);
}

void zNPCPrawn::render_debug()
{
}

// void zNPCPrawn::turning() const
// {
// }
/* zNPCPrawn::turning (void) const */
bool zNPCPrawn::turning() const
{
    F32 spC;
    F32 sp8;
    F32 temp_f2;
    F32 temp_f2_2;
    F32 temp_f2_3;
    F32 temp_f3;
    S8 var_r0;
    RwMatrix* temp_r6;

    var_r0 = 0;
    temp_r6 = this->model->Mat;
    temp_f3 = this->turn.vel;
    return TRUE;
}

xVec3& zNPCPrawn::get_facing() const
{
    return reinterpret_cast<xVec3&>(this->model->Mat->at);
}

U8 zNPCPrawn::ColChkFlags() const
{
    return 0;
}

U8 zNPCPrawn::ColPenFlags() const
{
    return 0;
}

U8 zNPCPrawn::ColChkByFlags() const
{
    return 16;
}

U8 zNPCPrawn::ColPenByFlags() const
{
    return 16;
}

U8 zNPCPrawn::PhysicsFlags() const
{
    return 3;
}

S32 zNPCPrawn::IsAlive()
{
    return this->life > 0;
}
