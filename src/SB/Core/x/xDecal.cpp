#include "xDecal.h"

#include <types.h>

#include "xString.h"
#include "xstransvc.h"

namespace 
{
    static xDecalEmitter * active_emitters[32];
    static U32 active_emitters_size;

    void register_emitter(xDecalEmitter* emitter)
    {
        if (active_emitters_size < 32)
        {
            active_emitters[active_emitters_size] = emitter;
            active_emitters_size++;
        }
    }

    F32 choose_greatest(F32 a, F32 b, F32 c);
}  // end of anonymous namespace

void xDecalInit()
{
    active_emitters_size = 0;
}

void xDecalUpdate(F32 dt)
{
    for (U32 i = 0; i < active_emitters_size; ++i)
    {
        if (active_emitters[i]->need_update())
        {
            active_emitters[i]->update(dt);
        }
    }
}

void xDecalEmitter::init(S32 max_size, const char* texture_name)
{
    register_emitter(this);
    units.init(max_size);
    debug_init(texture_name);
}

void xDecalEmitter::set_default_config()
{
    cfg.flags = 0x0;
    cfg.life_time = 1.0f;
    cfg.blend_src = 5;
    cfg.blend_dst = 2;
    cfg.texture.uv[0].assign(0.0f, 0.0f);
    cfg.texture.uv[1].assign(1.0f, 1.0f);
    cfg.texture.cols = 1;
    cfg.texture.rows = 1;
    cfg.texture.mode = TM_DEFAULT;

    refresh_config();
}

void xDecalEmitter::set_texture(const char* name)
{
    set_texture(xStrHash(name));
}


void xDecalEmitter::set_texture(U32 id)
{
    RwTexture* tex;
    if (id == 0)
    {
        tex = NULL;
    }
    else
    {
        tex = (RwTexture*)xSTFindAsset(id, NULL);
    }

    set_texture(tex);
}

void xDecalEmitter::set_texture(RwTexture* tex)
{
    this->texture.asset = tex;
    this->texture.prev = 0;
}

void xDecalEmitter::refresh_config()
{
    if (this->cfg.life_time < 0.001f)
    {
        this->cfg.life_time = 0.001f;
    }

    this->ilife = 1.0f / this->cfg.life_time;

    if (this->cfg.texture.rows == 0)
    {
        this->cfg.texture.rows = 1;
    }

    if (this->cfg.texture.cols == 0)
    {
        this->cfg.texture.cols = 1;
    }
    
    this->cfg.texture.uv[0].x = range_limit<F32>(this->cfg.texture.uv[0].x, 0.0f, 0.99f);
    this->cfg.texture.uv[0].y = range_limit<F32>(this->cfg.texture.uv[0].y, 0.0f, 0.99f);
    this->cfg.texture.uv[1].x = range_limit<F32>(this->cfg.texture.uv[1].x, 0.01f + this->cfg.texture.uv[0].x, 1.0f);
    this->cfg.texture.uv[1].y = range_limit<F32>(this->cfg.texture.uv[1].y, 0.01f + this->cfg.texture.uv[0].y, 1.0f);

    this->texture.units = this->cfg.texture.rows * this->cfg.texture.cols;
    this->texture.size.x = (this->cfg.texture.uv[1].x - this->cfg.texture.uv[0].x) / this->cfg.texture.cols;
    this->texture.size.y = (this->cfg.texture.uv[1].y - this->cfg.texture.uv[0].y) / this->cfg.texture.rows;

    this->texture.isize.assign(1.0f / this->texture.size.x, 1.0f / this->texture.size.y);
}

void xDecalEmitter::set_curve(const curve_node* curve, size_t size)
{
    this->curve_size = size;
    this->curve = (curve_node*)curve;

    this->debug_update_curve();
}

void xDecalEmitter::emit(const xMat4x3& mat, S32 texture_index)
{
    if (this->units.full())
    {
        this->units.pop_back();
    }

    this->units.push_front();
    unit_data& udata = this->units.front();
    udata.age = 0.0f;

    if (this->cfg.flags & 0x2)
    {
        udata.mat.right.assign(1.0f, 1.0f, 1.0f);
        udata.mat.pos = mat.pos;
        udata.cull_size = 0.5f;
    }
    else
    {
        udata.mat = mat;
        F32 greatest_length = choose_greatest(udata.mat.right.length(), udata.mat.up.length(), udata.mat.at.length());
        udata.cull_size = greatest_length * 0.5f;
    }

    if (texture_index < 0 || texture_index > (S32)this->texture.units)
    {
        texture_index = this->select_texture_unit();
    }
    
    udata.u = texture_index % this->cfg.texture.rows;
    udata.v = texture_index / this->cfg.texture.rows;
}

namespace
{
    F32 choose_greatest(F32 a, F32 b, F32 c)
    {
        F32 greatest = a;
        if (greatest < b)
        {
            greatest = b;
        }
        if (greatest < c)
        {
            greatest = c;
        }
        return greatest;
    }
}  // end of anonymous namespace

void xDecalEmitter::emit(const xMat4x3& mat, const xVec3& scale, S32 texture_index)
{
    if (this->units.full())
    {
        this->units.pop_back();
    }

    this->units.push_front();
    unit_data& udata = this->units.front();
    udata.age = 0.0f;

    if (this->cfg.flags & 0x2)
    {
        udata.mat.right = scale;
        udata.mat.pos = mat.pos;
        udata.cull_size = 0.5f * choose_greatest(scale.x, scale.y, scale.z);
    }
    else
    {
        udata.mat = mat;
        udata.mat.right *= scale.x;
        udata.mat.up *= scale.y;
        udata.mat.at *= scale.z;
        udata.cull_size = 0.5f * choose_greatest(udata.mat.right.length(), udata.mat.up.length(), udata.mat.at.length());
    }

    if (texture_index < 0 || texture_index > (S32)this->texture.units)
    {
        texture_index = this->select_texture_unit();
    }
    
    udata.u = texture_index % this->cfg.texture.rows;
    udata.v = texture_index / this->cfg.texture.rows;
}

void xDecalEmitter::update(F32 dt)
{
    float dage = this->ilife;
    
    ptank_pool__color_mat_uv2 pool;
    pool.reset();
    
    iterator<unit_data> it; 
    // unit_data& unit;
    // curve_node& node0;
    // curve_node& node1;
    F32 scale; // r20
    xVec4 * _loc; // r2
    F32 par_dist; // r1

    debug_update(dt);

}
