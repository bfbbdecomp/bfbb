#include "zDiscoFloor.h"

#include "zSurface.h"
#include "zGlobals.h"
#include "zGrid.h"
#include "zRenderState.h"
#include "zEntSimpleObj.h"
#include "zLOD.h"

#include "xString.h"
#include "xDebug.h"
#include "xMath.h"
#include "xMathInlines.h"

#include "iModel.h"
#include "iMath.h"

#include <string.h>
#include <stdio.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\stdlib.h>

namespace
{
    struct
    {
        xLightKit kit;
        xLightKitLight light[1];
    } glow_light;

    U32 current_disco_floor;

    const F32 close_encounters[5] = { 2, 4, 0, -12, -5 };
    const F32 blues_scale[6] = { -12, -8, -5, 0, 2, 4 };

    void create_glow_light()
    {
        memset(&glow_light, 0, sizeof(glow_light));

        // non-matching: scheduling

        glow_light.kit.tagID = 'TIKL';

        glow_light.kit.lightCount = 1;
        glow_light.kit.lightList = glow_light.light;
        glow_light.light[0].type = 0x1;
        glow_light.light[0].color.red = 1.0;
        glow_light.light[0].color.green = 1.0;
        glow_light.light[0].color.blue = 1.0;
        glow_light.light[0].color.alpha = 1.0;

        xLightKit_Prepare(&glow_light.kit);
    }

    void destroy_glow_light()
    {
        xLightKit_Destroy(&glow_light.kit);
    }

    void object_prefix(const char* name, size_t& size, size_t& first)
    {
        size = 0;
        first = 0;

        size_t namelen = strlen(name);

        if (namelen)
        {
            for (long i = namelen - 1; i >= 0; i--)
            {
                U8 c = (U8)(name[i]);
                if (c < '0' || c > '9')
                {
                    size = i + 1;

                    if (size < namelen)
                    {
                        first = atoi(&name[size]);
                    }

                    break;
                }
            }
        }
    }

    zEntSimpleObj* find_object(const char* name)
    {
        zEntSimpleObj* object = (zEntSimpleObj*)zSceneFindObject(xStrHash(name));

        if (!object)
        {
            object = NULL;
        }

        return object;
    }

    size_t find_tiles(const char* name, z_disco_floor::tile_data* tiles, size_t size)
    {
        char buffer[256];
        size_t prefix_size, start;

        object_prefix(name, prefix_size, start);
        memcpy(buffer, name, prefix_size);

        size_t i = start;
        size_t total;

        while (true)
        {
            total = i - start;

            if (total >= size)
            {
                return total;
            }

            tiles[total].ent = NULL;

            for (S32 j = 1; j < 5; j++)
            {
                sprintf(buffer + prefix_size, "%0*d", j, i);

                tiles[total].ent = find_object(buffer);

                if (tiles[total].ent)
                {
                    break;
                }
            }

            if (!tiles[total].ent)
            {
                return total;
            }

            i++;
        }
    }

    U32 get_tile(const U8* a, size_t b)
    {
        static S8 init;
        static volatile S32 bit_index;
        static S32 r;

        U32 uVar1 = a[(b >> 2) & 0x1fffffff] >> ((b & 3) << 1) & 3;
        if (uVar1 == 2)
        {
            if (init == 0)
            {
                bit_index = 0x20;
                init = 1;
            }
            bit_index++;
            if (bit_index >= 0x20)
            {
                bit_index = 0;
                r = xrand();
            }
            uVar1 = r & 1 << bit_index;
            uVar1 = (-uVar1 | uVar1) >> 0x1f;
        }
        return uVar1;
    }

    void set_tile(U8* r3, size_t r4, U32 r5)
    {
        U32 uVar1 = (r4 >> 2) & 0x1fffffff;
        int iVar2 = (r4 & 3) << 1;
        r3[uVar1] = r3[uVar1] & ~(3 << iVar2) | (r5 << iVar2);
    }

    void translate_mask(U8* r3, const U8* r4, size_t r5)
    {
        for (size_t i = 0; i < r5; i++)
        {
            U32 tile = get_tile(r4, i);
            set_tile(r3, i, tile);
        }
    }

    void set_object_state(const z_disco_floor&, size_t, S32);

    void refresh_state(z_disco_floor& df)
    {
        current_disco_floor = df.id;

        if (df.next_state != df.state)
        {
            for (size_t i = 0; i < df.tiles_size; i++)
            {
                U32 t1 = get_tile(df.active_state_mask, i);
                U32 t2 = get_tile(df.next_state_mask, i);

                if (t2 == 0)
                {
                    set_object_state(df, i, 0);
                }
                else if (t1 == 1)
                {
                    set_object_state(df, i, 2);
                }
                else
                {
                    set_object_state(df, i, 1);
                }
            }
        }
        else
        {
            for (size_t i = 0; i < df.tiles_size; i++)
            {
                U32 t = get_tile(df.active_state_mask, i);

                if (t == 1)
                {
                    set_object_state(df, i, 2);
                }
                else
                {
                    set_object_state(df, i, 0);
                }
            }
        }
    }
} // namespace

namespace
{
    void play_sound(z_disco_floor& df)
    {
        xVec3 var_48;

        xVec3Sub(&var_48, &df.bound.center, (xVec3*)&globals.player.ent.model->Mat->pos);

        if (xVec3Length2(&var_48) < SQR(df.bound.r) * SQR(1.5f) * SQR(1.5f))
        {
            df.curr_note++;

            if (df.curr_note >= 5)
            {
                df.curr_note = 5.0f * -xurand() - 5.0f;
            }

            F32 pitch = (df.curr_note >= 0) ? close_encounters[df.curr_note] :
                                              blues_scale[(S32)(6.0f * xurand() - 0.01f)];
            F32 pitch_offset = pitch;

            if (df.transition_delay < 0.05f)
            {
                pitch_offset += 17.0f;
            }
            else if (df.transition_delay > 1.0f)
            {
                pitch_offset += -10.0f;
            }
            else
            {
                F32 tmp = (df.transition_delay - 0.05f);
                tmp /= 0.95f;
                tmp = (1.0f - tmp) * 27.0f;
                tmp += -10.0f;

                pitch_offset += tmp;
            }

            xSndPlay3D(xStrHash("Disco_6_Alt"), 0.231f, pitch_offset, 0, 0, &df.bound.center,
                       0.75f * df.bound.r, 1.5f * df.bound.r, SND_CAT_GAME, 0.0f);

            df.sound_delay = 0.0f;
        }
    }

    size_t state_byte_size(size_t mask_size);

    F32 update_transition(z_disco_floor& df, F32 dt)
    {
        df.transition_time += dt;

        if (df.transition_time < df.transition_delay)
        {
            return 0.0f;
        }

        if (df.sound_delay > 0.05f)
        {
            play_sound(df);
        }

        if (df.transition_time - dt < df.transition_delay)
        {
            dt = df.transition_time - df.transition_delay;
        }

        df.state = df.next_state;
        df.state_counter++;

        memcpy(df.active_state_mask, df.next_state_mask,
               state_byte_size(df.asset->state_mask_size));

        refresh_state(df);

        return dt;
    }

    size_t state_byte_size(size_t mask_size)
    {
        return (((mask_size << 1) + 7) >> 3);
    }

    void update_state(z_disco_floor& df, F32 dt)
    {
        df.state_time += dt;

        if (df.state_time < df.state_delay)
        {
            return;
        }

        if (df.state_time - dt < df.state_delay)
        {
            dt = df.state_time - df.state_delay;
        }

        df.state_time = 0.0f;
        df.next_state = df.state + (df.flag.forward ? 1 : -1);

        if (df.next_state < df.min_state)
        {
            if (df.asset->flags & 0x1)
            {
                df.next_state = df.max_state;
            }
            else
            {
                df.next_state = df.state;
            }
        }

        if (df.next_state > df.max_state)
        {
            if (df.asset->flags & 0x1)
            {
                df.next_state = df.min_state;
            }
            else
            {
                df.next_state = df.state;
            }
        }

        translate_mask(df.next_state_mask, df.state_masks[df.next_state], df.tiles_size);

        if (df.transition_delay <= dt)
        {
            df.state = df.next_state;
            df.state_counter++;

            memcpy(df.active_state_mask, df.next_state_mask,
                   state_byte_size(df.asset->state_mask_size));
        }
        else
        {
            df.transition_time = 0.0f;
        }

        refresh_state(df);
    }

    xSurface& get_damage_surface()
    {
        static xSurface surf;
        static zSurfaceProps props;
        static zSurfAssetBase asset;
        static bool inited = false;

        if (inited)
        {
            return surf;
        }

        xSurface& defsurf = zSurfaceGetDefault();

        surf = defsurf;
        props = *(zSurfaceProps*)defsurf.moprops;
        asset = *props.asset;

        surf.moprops = &props;
        props.asset = &asset;
        asset.game_damage_type = 0x4;

        return surf;
    }
} // namespace

namespace
{
    void render_model(xModelInstance* model, const xSphere& sph)
    {
        RpAtomic* atomic = model->Data;

        atomic->worldBoundingSphere.center = *(RwV3d*)&sph.center;
        atomic->worldBoundingSphere.radius = sph.r;

        xMat4x3* mat = (xMat4x3*)model->Mat;
        xMat4x3* ltm = (xMat4x3*)RwFrameGetLTM(RpAtomicGetFrame(atomic));

        *ltm = *mat;

        if (0.0f != model->Scale.x)
        {
            ltm->right *= model->Scale.x;
            ltm->up *= model->Scale.y;
            ltm->at *= model->Scale.z;
        }

        RwMatrixUpdate((RwMatrix*)ltm);
        RpAtomicRender(atomic);
    }

    void render_model(xModelInstance* model, xSphere& sph, F32 y_offset)
    {
        RpAtomic* atomic = model->Data;

        atomic->worldBoundingSphere.center = *(RwV3d*)&sph.center;
        atomic->worldBoundingSphere.radius = sph.r;

        xMat4x3* mat = (xMat4x3*)model->Mat;
        xMat4x3* ltm = (xMat4x3*)RwFrameGetLTM(RpAtomicGetFrame(atomic));

        *ltm = *mat;

        if (0.0f != model->Scale.x)
        {
            ltm->right *= model->Scale.x;
            ltm->up *= model->Scale.y;
            ltm->at *= model->Scale.z;
        }

        ltm->pos.y += y_offset;

        RwMatrixUpdate((RwMatrix*)ltm);
        RpAtomicRender(atomic);
    }

    void add_global_tweaks();

    struct render_context
    {
        xMat4x3 mat;
        iColor_tag color;
    };

    struct bucket_data
    {
        RpAtomic* atomic;
        RpAtomic* atomic_clone;
        render_context* rc;
        U16 size;
        U16 used;
    };

    struct clone_pipe_data
    {
        // this struct is likely ps2 (and maybe xbox) only,
        // it's completely stubbed out on gamecube

#ifdef PS2
        bucket_data* buckets;
        U32 buckets_size;
        RwFrame** frames;
        RwRGBAReal* colors;
#endif

        void init();
        void post_setup();
        void destroy();
    };

    clone_pipe_data clone_pipe;
} // namespace

//extern clone_pipe_data clone_pipe;

void z_disco_floor::init()
{
    create_glow_light();
    xDebugRemoveTweak("Disco Floor");
    add_global_tweaks();
    clone_pipe.init();
}

namespace
{
    void clone_pipe_data::init()
    {
    }

    void add_global_tweaks()
    {
    }
} // namespace

void z_disco_floor::post_setup()
{
    clone_pipe.post_setup();
}

namespace
{
    void clone_pipe_data::post_setup()
    {
    }
} // namespace

void z_disco_floor::destroy()
{
    destroy_glow_light();
    clone_pipe.destroy();
}

namespace
{
    void clone_pipe_data::destroy()
    {
    }
} // namespace

void z_disco_floor::render_all()
{
    iColor_tag color; // unused
    zScene& s = *globals.sceneCur;
    z_disco_floor* begin_floor = (z_disco_floor*)s.baseList[eBaseTypeDiscoFloor];
    z_disco_floor* end_floor = begin_floor + s.baseCount[eBaseTypeDiscoFloor];
    RpAtomic* atomic; // unused
    bucket_data* bucket; // unused
    z_disco_floor* floor;
    S32 group;
    tile_data* tile; // unused
    tile_data* end_tile; // unused
    xModelInstance* model; // unused

    floor = begin_floor;

    while (floor != end_floor)
    {
        floor->flag.culled = floor->flag.culled || iModelSphereCull(&floor->bound);
        floor++;
    }

    xLightKit_Enable(&glow_light.kit, globals.currWorld);

    for (group = 0; group < 3; group++)
    {
        floor = begin_floor;

        while (floor != end_floor)
        {
            if (!floor->flag.culled)
            {
                floor->render(group);
            }

            floor++;
        }
    }
}

void z_disco_floor::effects_render_all()
{
    iColor_tag color; // unused
    zScene& s = *globals.sceneCur;
    z_disco_floor* begin_floor = (z_disco_floor*)s.baseList[eBaseTypeDiscoFloor];
    z_disco_floor* end_floor = begin_floor + s.baseCount[eBaseTypeDiscoFloor];
    RpAtomic* atomic; // unused
    bucket_data* bucket; // unused
    z_disco_floor* floor;
    S32 group;
    F32 glow; // unused
    F32 dalpha; // unused
    F32 dyoffset; // unused
    tile_data* tile; // unused
    tile_data* end_tile; // unused
    xModelInstance* model; // unused
    F32 alpha; // unused
    F32 yoffset; // unused
    S32 i; // unused

    floor = begin_floor;

    while (floor != end_floor)
    {
        floor->flag.culled = floor->flag.culled || iModelSphereCull(&floor->bound);
        floor++;
    }

    zRenderState(SDRS_DiscoFloorGlow);
    xLightKit_Enable(&glow_light.kit, globals.currWorld);

    for (group = 0; group < 3; group++)
    {
        floor = begin_floor;

        while (floor != end_floor)
        {
            if (!floor->flag.culled && !floor->flag.glow_culled)
            {
                floor->effects_render(group);
            }

            floor++;
        }
    }
}

void z_disco_floor::init(void* ent, void* asset)
{
    ((z_disco_floor*)ent)->load(*(z_disco_floor_asset*)asset);
}

void z_disco_floor::load(z_disco_floor_asset& asset)
{
    xBaseInit(this, &asset);

    baseType = eBaseTypeDiscoFloor;
    this->asset = &asset;
    eventFunc = event_handler;

    if (linkCount != 0)
    {
        link = (xLinkAsset*)(&asset + 1);
    }

    char* data = (char*)(&asset.flags);

    prefix[0] = data + asset.prefix_offset.off;
    prefix[1] = data + asset.prefix_offset.transition;
    prefix[2] = data + asset.prefix_offset.on;

    state_masks = (U8**)xMemAllocSize(asset.states_size * sizeof(U8*));

    size_t* state_offsets = (size_t*)(data + asset.states_offset);

    for (size_t i = 0; i < asset.states_size; i++)
    {
        state_masks[i] = (U8*)(data + state_offsets[i]);
    }

    active_state_mask = (U8*)xMemAllocSize(state_byte_size(asset.state_mask_size));
    next_state_mask = (U8*)xMemAllocSize(state_byte_size(asset.state_mask_size));

    if (asset.interval.transition < 0.0f)
    {
        asset.interval.transition = 0.25f;
    }

    if (asset.interval.state < 0.0f)
    {
        asset.interval.state = 1.0f;
    }

    flag.enabled = (asset.flags & 0x2) && (tiles_size != 0);

    sound_delay = 0.0f;

    curr_note = 5.0f * -xurand() - 5.0f;
}

namespace
{
    void add_tweaks(z_disco_floor&);
}

void z_disco_floor::setup()
{
    current_disco_floor = id;
    tiles_size = asset->state_mask_size;

    if (!tiles_size)
    {
        prefix[0] = prefix[1] = prefix[2] = NULL;

        reset();
        add_tweaks(*this);

        return;
    }

    size_t data_size = tiles_size * sizeof(tile_data);
    char* buffer = (char*)xMemAllocSize(data_size * 3);

    for (S32 group = 0; group < 3; group++)
    {
        tiles[group] = (tile_data*)buffer;

        buffer += data_size;

        find_tiles(prefix[group], tiles[group], tiles_size);
    }

    for (size_t i = 0; i < tiles_size; i++)
    {
        xSurface*& surf = tiles[2][i].ent->model->Surf;

        if (!surf)
        {
            surf = &get_damage_surface();
        }
        else
        {
            ((zSurfaceProps*)surf->moprops)->asset->game_damage_type = 0x4;
        }
    }

    for (S32 i = 0; i < 3; i++)
    {
        for (U32 j = 0; j < tiles_size; j++)
        {
            tiles[i][j].ent->sflags = 0x10;
        }
    }

    refresh_spheres();
    refresh_bound();
    refresh_cull_dist();
    reset();
    add_tweaks(*this);
}

namespace
{
    void add_tweaks(z_disco_floor&)
    {
    }
} // namespace

void z_disco_floor::reset()
{
    flag.culled = false;
    flag.forward = true;
    pulse_time = (PI * 2) * xurand();
    transition_delay = asset->interval.transition;
    state_delay = asset->interval.state;
    min_state = 0;
    max_state = asset->states_size - 1;
    state_counter = 0;

    set_state(0, true);

    flag.enabled = (asset->flags & 0x2) && (tiles_size != 0);
}

void z_disco_floor::update(xScene&, F32 dt)
{
    if (!flag.enabled)
    {
        flag.culled = true;
        return;
    }

    distance_cull();

    if (flag.culled)
    {
        return;
    }

    update_pulse(dt);

    sound_delay += dt;

    if (transition_time < transition_delay)
    {
        dt = update_transition(*this, dt);
    }

    if (dt > 0.0f)
    {
        update_state(*this, dt);
    }
}

void z_disco_floor::set_state(size_t state, bool immediate)
{
    size_t r; // unused
    S32 bit_index; // unused

    if (state < min_state)
    {
        state = min_state;
    }
    else if (state > max_state)
    {
        state = max_state;
    }

    if (immediate)
    {
        next_state = state;
        this->state = state;
        transition_time = transition_delay;

        translate_mask(next_state_mask, state_masks[next_state], tiles_size);
        memcpy(active_state_mask, next_state_mask, state_byte_size(asset->state_mask_size));
    }
    else
    {
        next_state = state;
        transition_time = 0.0f;

        translate_mask(next_state_mask, state_masks[next_state], tiles_size);
    }

    state_time = 0.0f;

    refresh_state(*this);
}

void z_disco_floor::enable()
{
    flag.enabled = (tiles_size != 0);
}

void z_disco_floor::disable()
{
    flag.enabled = false;
}

void z_disco_floor::set_state_range(S32 min, S32 max, bool immediate)
{
    size_t min_state = range_limit<S32>(min, 0, asset->states_size - 1);
    size_t max_state = range_limit<S32>(max, min, asset->states_size - 1);

    if (min_state == this->min_state && max_state == this->max_state)
    {
        return;
    }

    this->min_state = min_state;
    this->max_state = max_state;

    if (immediate)
    {
        size_t newstate = range_limit<size_t>(state, min_state, max_state);

        if (newstate != state)
        {
            set_state(newstate, true);
        }
    }
    else
    {
        size_t newstate = range_limit<size_t>(next_state, min_state, max_state);

        if (newstate != next_state)
        {
            set_state(newstate, false);
        }
    }
}

void z_disco_floor::set_transition_delay(F32 s)
{
    transition_delay = s;
}

void z_disco_floor::set_state_delay(F32 s)
{
    state_delay = s;
}

void z_disco_floor::refresh_spheres()
{
    for (S32 group = 0; group < 3; group++)
    {
        tile_data* it = tiles[group];
        tile_data* end = it + tiles_size;

        while (it != end)
        {
            iModelCull(it->ent->model->Data, it->ent->model->Mat);

            RwSphere& msphere = it->ent->model->Data->worldBoundingSphere;
            xVec3& scale = it->ent->model->Scale;

            if (0.0f != scale.x)
            {
                if (scale.x >= scale.y && scale.x >= scale.z)
                {
                    msphere.radius *= scale.x;
                }
                else if (scale.y >= scale.z)
                {
                    msphere.radius *= scale.y;
                }
                else
                {
                    msphere.radius *= scale.z;
                }
            }

            it->sphere.center = (xVec3&)msphere;
            it->sphere.r = msphere.radius;
            it->sphere.center.y += 0.1f;
            it->sphere.r += 0.1f;

            it++;
        }
    }
}

void z_disco_floor::update_pulse(F32 dt)
{
    pulse_time += (2 * PI) * dt;
    pulse_time = xrmod(pulse_time);

    F32 f2 = 0.5f * isin(pulse_time) + 0.5f;

    pulse_glow[0] = 0.1f * f2 + 0.1f;
    pulse_glow[0] *= glow_fade;

    pulse_glow[1] = 0.2f * f2 + 0.2f;
    pulse_glow[1] *= glow_fade;

    pulse_glow[2] = 0.3f * f2 + 0.2f;
    pulse_glow[2] *= glow_fade;
}

void z_disco_floor::refresh_cull_dist()
{
    if (!tiles_size)
    {
        cull_dist_glow = cull_dist_update = 0.0f;
    }
    else
    {
        zLODTable* lod = zLOD_Get(tiles[0][0].ent);

        if (!lod)
        {
            cull_dist_glow = 25.0f;
            cull_dist_update = 100.0f;
        }
        else
        {
            cull_dist_glow = xsqrt(lod->lodDist[0]);
            cull_dist_update = xsqrt(lod->noRenderDist);
        }
    }
}

void z_disco_floor::distance_cull()
{
    xVec3& cam_loc = globals.camera.mat.pos;
    xVec3 offset = bound.center - cam_loc;

    F32 dist = offset.length();

    F32 max_update_dist = cull_dist_update + bound.r;

    flag.culled = (dist >= max_update_dist);

    F32 min_glow_dist = cull_dist_glow + bound.r;
    F32 max_glow_dist = 10.0f + min_glow_dist;

    flag.glow_culled = (dist >= max_glow_dist);

    if (dist <= min_glow_dist)
    {
        glow_fade = 1.0f;
    }
    else if (dist >= max_glow_dist)
    {
        glow_fade = 0.0f;
    }
    else
    {
        glow_fade = 0.1f * (max_glow_dist - dist);
    }
}

void z_disco_floor::render(S32 group)
{
    tile_data* tile = tiles[group];
    tile_data* end_tile = tile + tiles_size;

    while (tile != end_tile)
    {
        if (!(tile->ent->flags & 0x1))
        {
            tile->culled = true;
        }
        else
        {
            tile->culled = (iModelSphereCull(&tile->sphere) != 0);

            if (!tile->culled)
            {
                render_model(tile->ent->model, tile->sphere);
            }
        }

        tile++;
    }
}

void z_disco_floor::effects_render(S32 group)
{
    F32 glow = pulse_glow[group];

    if (0.0f == glow)
    {
        return;
    }

    // non-matching: regalloc

    F32 dyoffset = 0.1f * glow;
    F32 dalpha = 0.35f * -glow;
    F32 yoffset = dyoffset;
    F32 alpha = 0.7f * glow;

    for (S32 i = 0; i < 2; i++)
    {
        RpAtomic* atomic = NULL;
        tile_data* tile = tiles[group];
        tile_data* end_tile = tile + tiles_size;
        F32 alphaf = 255.0f * alpha + 0.5f;

        while (tile != end_tile)
        {
            if (!tile->culled)
            {
                RpAtomic* a = tile->ent->model->Data;

                if (atomic != a)
                {
                    if (atomic)
                    {
                        iModelResetMaterial(atomic);
                    }

                    iModelSetMaterialAlpha(a, alphaf);

                    atomic = a;
                }

                render_model(tile->ent->model, tile->sphere, yoffset);
            }

            tile++;
        }

        if (atomic)
        {
            iModelResetMaterial(atomic);
        }

        alpha += dalpha;
        yoffset += dyoffset;
    }
}

S32 z_disco_floor::event_handler(xBase*, xBase* to, U32 event, const F32* argf, xBase*)
{
    z_disco_floor& f = *(z_disco_floor*)to;

    switch (event)
    {
    case eEventReset:
    {
        f.reset();
        break;
    }
    case eEventEnable:
    {
        f.enable();
        break;
    }
    case eEventDisable:
    {
        f.disable();
        break;
    }
    case eEventSetState:
    {
        f.set_state(argf[0], false);
        break;
    }
    case eEventSetStateRange:
    {
        f.set_state_range(argf[0], argf[1], false);
        break;
    }
    case eEventSetStateDelay:
    {
        f.set_state_delay(argf[0]);
        break;
    }
    case eEventSetTransitionDelay:
    {
        f.set_transition_delay(argf[0]);
        break;
    }
    }

    return 1;
}

template <> size_t range_limit(size_t v, size_t minv, size_t maxv)
{
    if (v <= minv)
    {
        return minv;
    }

    if (v >= maxv)
    {
        return maxv;
    }

    return v;
}

template <> S32 range_limit(S32 v, S32 minv, S32 maxv)
{
    if (v <= minv)
    {
        return minv;
    }

    if (v >= maxv)
    {
        return maxv;
    }

    return v;
}
