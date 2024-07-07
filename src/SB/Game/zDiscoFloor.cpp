#include "zDiscoFloor.h"

#include "zSurface.h"
#include "zGlobals.h"
#include "zRenderState.h"
#include "zEntSimpleObj.h"
#include "zLOD.h"

#include "xString.h"
#include "xDebug.h"
#include "xMath.h"

#include "iModel.h"
#include "iMath.h"

#include <string.h>
#include <stdio.h>

extern U32 current_disco_floor;

extern F32 _710_2; // 1.0f
extern F32 _908; // 1.5f
extern F32 _909_1; // 5.0f
extern F32 _910; // 6.0f
extern F32 _911_1; // 0.01f
extern F32 _912; // 0.05f
extern F32 _913_0; // 17.0f
extern F32 _914_0; // -10.0f
extern F32 _915; // 0.95f
extern F32 _916_0; // 27.0f
extern F32 _917_1; // 0.231f
extern F32 _918_1; // 0.75f
extern F32 _919_1; // 0.0f
extern F32 _1129; // 0.25f
extern F32 _1174_0; // 2*PI
extern F32 _1260_1; // 0.1f
extern F32 _1270_1; // 0.5f
extern F32 _1271_0; // 0.2f
extern F32 _1272; // 0.7f
extern F32 _1273_0; // 0.3f
extern F32 _1406; // 25.0f
extern F32 _1407; // 100.0f
extern F32 _1419_2; // 10.0f
extern F32 _1461_0; // 0.35f
extern F32 _1462_0; // 255.0f

extern const char _stringBase0_89[];

namespace
{
    struct
    {
        xLightKit kit;
        xLightKitLight light[1];
    } glow_light;

#ifndef NON_MATCHING
    void create_glow_light();
#else
    void create_glow_light()
    {
        memset(&glow_light, 0, sizeof(glow_light));

        // non-matching: scheduling

        glow_light.kit.tagID = 'TIKL';
        glow_light.kit.lightCount = 1;
        glow_light.kit.lightList = glow_light.light;
        glow_light.light[0].type = 0x1;
        glow_light.light[0].color.red = _710_2;
        glow_light.light[0].color.green = _710_2;
        glow_light.light[0].color.blue = _710_2;
        glow_light.light[0].color.alpha = _710_2;

        xLightKit_Prepare(&glow_light.kit);
    }
#endif

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
                if ((char)name[i] < '0' || (char)name[i] > '9')
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
                sprintf(buffer + prefix_size, _stringBase0_89, j, i);

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

    U32 get_tile(const U8*, size_t);

    void set_tile(U8*, size_t, U32);

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

extern F32 close_encounters[5];
extern F32 blues_scale[6];

namespace
{

#ifndef NON_MATCHING
    void play_sound(z_disco_floor& df);
#else
    void play_sound(z_disco_floor& df)
    {
        xVec3 var_48;

        xVec3Sub(&var_48, &df.bound.center, (xVec3*)&globals.player.ent.model->Mat->pos);

        // non-matching: regalloc
        if (xVec3Length2(&var_48) < SQR(df.bound.r) * SQR(_908))
        {
            df.curr_note++;

            if (df.curr_note >= 5)
            {
                df.curr_note = _909_1 * -xurand() - _909_1;
            }

            F32 pitch, pitch_offset;

            if (df.curr_note >= 0)
            {
                pitch = close_encounters[df.curr_note];
            }
            else
            {
                pitch = blues_scale[(S32)(_910 * xurand() - _911_1)];
            }

            if (df.transition_delay < _912)
            {
                pitch_offset = pitch + _913_0;
            }
            else if (df.transition_delay > _710_2)
            {
                pitch_offset = pitch + _914_0;
            }
            else
            {
                // non-matching: fmadds
                pitch_offset =
                    pitch + _916_0 * (_710_2 - (df.transition_delay - _912) / _915) + _914_0;
            }

            xSndPlay3D(xStrHash(_stringBase0_89 + 5), _917_1, pitch_offset, 0, 0, &df.bound.center,
                       _918_1 * df.bound.r, _908 * df.bound.r, SND_CAT_GAME, _919_1);

            df.sound_delay = _919_1;
        }
    }
#endif

    size_t state_byte_size(size_t mask_size);

    F32 update_transition(z_disco_floor& df, F32 dt)
    {
        df.transition_time += dt;

        if (df.transition_time < df.transition_delay)
        {
            return _919_1;
        }

        if (df.sound_delay > _912)
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

        df.state_time = _919_1;
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
            df.transition_time = _919_1;
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

        if (_919_1 != model->Scale.x)
        {
            ltm->right *= model->Scale.x;
            ltm->up *= model->Scale.y;
            ltm->at *= model->Scale.z;
        }

        RwMatrixUpdate((RwMatrix*)ltm);
        RpAtomicRender(atomic);
    }

    void render_model(xModelInstance* model, const xSphere& sph, F32 y_offset)
    {
        RpAtomic* atomic = model->Data;

        atomic->worldBoundingSphere.center = *(RwV3d*)&sph.center;
        atomic->worldBoundingSphere.radius = sph.r;

        xMat4x3* mat = (xMat4x3*)model->Mat;
        xMat4x3* ltm = (xMat4x3*)RwFrameGetLTM(RpAtomicGetFrame(atomic));

        *ltm = *mat;

        if (_919_1 != model->Scale.x)
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
    xDebugRemoveTweak(_stringBase0_89 + 17);
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

#ifdef NON_MATCHING
void z_disco_floor::load(z_disco_floor_asset& asset)
{
    xBaseInit(this, &asset);

    baseType = eBaseTypeDiscoFloor;
    this->asset = &asset;
    eventFunc = event_handler;

    if (linkCount)
    {
        link = (xLinkAsset*)(&asset + 1);
    }

    char* data = (char*)((xBaseAsset*)this + 1);

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

    if (asset.interval.transition < _919_1)
    {
        asset.interval.transition = _1129;
    }

    if (asset.interval.state < _919_1)
    {
        asset.interval.state = _710_2;
    }

    flag.enabled = (asset.flags & 0x2) && (tiles_size != 0);

    sound_delay = _919_1;

    // non-matching: _909_1 is saved in extra register
    curr_note = _909_1 * -xurand() - _909_1;
}
#endif

namespace
{
    void add_tweaks(z_disco_floor&);
}

#ifdef NON_MATCHING
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

    S32 i;
    U32 j = 0x10;

    // non-matching: j keeps getting reloaded

    for (i = 0; i < tiles_size; i++)
    {
        tiles[0][i].ent->sflags = j;
    }

    for (i = 0; i < tiles_size; i++)
    {
        tiles[1][i].ent->sflags = j;
    }

    for (i = 0; i < tiles_size; i++)
    {
        tiles[2][i].ent->sflags = j;
    }

    refresh_spheres();
    refresh_bound();
    refresh_cull_dist();
    reset();
    add_tweaks(*this);
}
#endif

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
    pulse_time = _1174_0 * xurand();
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

    if (dt > _919_1)
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
        transition_time = _919_1;

        translate_mask(next_state_mask, state_masks[next_state], tiles_size);
    }

    state_time = _919_1;

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

            if (_919_1 != scale.x)
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
            it->sphere.center.y += _1260_1;
            it->sphere.r += _1260_1;

            it++;
        }
    }
}

#ifdef NON_MATCHING
void z_disco_floor::update_pulse(F32 dt)
{
    pulse_time += _1174_0 * dt;
    pulse_time = xrmod(pulse_time);

    // non-matching: _1270_1 is saved in extra register

    F32 f2 = _1270_1 * isin(pulse_time) + _1270_1;

    pulse_glow[0] = _1260_1 * f2 + _1260_1;
    pulse_glow[0] += glow_fade;

    pulse_glow[1] = _1271_0 * f2 + _1271_0;
    pulse_glow[1] += glow_fade;

    pulse_glow[2] = _1273_0 * f2 + _1272;
    pulse_glow[2] += glow_fade;
}
#endif

void z_disco_floor::refresh_cull_dist()
{
    if (!tiles_size)
    {
        cull_dist_glow = cull_dist_update = _919_1;
    }
    else
    {
        zLODTable* lod = zLOD_Get(tiles[0][0].ent);

        if (!lod)
        {
            cull_dist_glow = _1406;
            cull_dist_update = _1407;
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
    F32 max_glow_dist = _1419_2 + min_glow_dist;

    flag.glow_culled = (dist >= max_glow_dist);

    if (dist <= min_glow_dist)
    {
        glow_fade = _710_2;
    }
    else if (dist >= max_glow_dist)
    {
        glow_fade = _919_1;
    }
    else
    {
        glow_fade = _1260_1 * (max_glow_dist - dist);
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

#ifdef NON_MATCHING
void z_disco_floor::effects_render(S32 group)
{
    F32 glow = pulse_glow[group];

    if (_919_1 == glow)
    {
        return;
    }

    // non-matching: regalloc

    F32 dyoffset = _1260_1 * glow;
    F32 dalpha = _1461_0 * -glow;
    F32 yoffset = dyoffset;
    F32 alpha = _1272 * glow;

    for (S32 i = 0; i < 2; i++)
    {
        RpAtomic* atomic = NULL;
        tile_data* tile = tiles[group];
        tile_data* end_tile = tile + tiles_size;
        F32 alphaf = _1462_0 * alpha + _1270_1;

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
#endif

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
