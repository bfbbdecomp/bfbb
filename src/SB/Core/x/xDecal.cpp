#include "xDecal.h"

#include <types.h>

#include "xString.h"
#include "xstransvc.h"
#include "zGlobals.h"
#include "containers.h"

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

namespace
{
    void lerp(iColor_tag& out, F32 t, const iColor_tag& a, const iColor_tag& b);
    void lerp(U8& out, F32 t, U8 a, U8 b);
    void lerp(F32& out, F32 t, F32 a, F32 b);
}  // end of anonymous namespace

void xDecalEmitter::update(F32 dt)
{
    // Unused from DWARF
    // xVec4* _loc; // r2
    // F32 par_dist; // r1
    
    debug_update(dt);
    F32 dage = dt * this->ilife;
    
    ptank_pool__color_mat_uv2 pool;
    pool.reset();
    
    pool.rs.texture = this->texture.asset;
    pool.rs.src_blend = this->cfg.blend_src;
    pool.rs.dst_blend = this->cfg.blend_dst;
    pool.rs.flags = this->cfg.flags & 0x1;
    this->curve_index = 0;
    
    static_queue<unit_data>::iterator it = this->units.begin();
    while (it != this->units.end())
    {
        unit_data& unit = *it;
        unit.age += dage;
        
        if (unit.age >= 1.0f)
        {
            break;
        }
        
        update_frac(unit);
        curve_node& node0 = this->curve[unit.curve_index];
        curve_node& node1 = this->curve[unit.curve_index+1];
        
        F32 scale;
        lerp(scale, unit.frac, node0.scale, node1.scale);
        
        *((F32*)&unit.mat.pos.z + 1) = unit.cull_size * scale;
        pool.next();
        if (!pool.valid())
        {
            break;
        }

        get_render_data(unit, scale, pool.color[0], pool.mat[0], pool.uv[0], pool.uv[1]);

        ++it;
    }

    pool.flush();
    this->units.erase(it, this->units.end());
}

namespace
{
    void lerp(F32& out, F32 t, F32 a, F32 b)
    {
        out = a + (b - a) * t;
    }
}

void xDecalEmitter::update_frac(xDecalEmitter::unit_data& unit)
{
    U32 i;
    for (i = this->curve_index; i < this->curve_size - 2; i++)
    {
        if (unit.age >= this->curve[i].time && unit.age <= this->curve[i + 1].time)
        {
            break;
        }

        this->curve_index++;
    }

    unit.curve_index = i;

    F32 curve_time = this->curve[this->curve_index].time;
    unit.frac = (1.0f / this->curve[this->curve_index + 1].time) * (unit.age - curve_time);
}

void xDecalEmitter::get_render_data(const xDecalEmitter::unit_data& unit, F32 scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1)
{
    lerp(color, unit.frac, this->curve[unit.curve_index].color, this->curve[unit.curve_index + 1].color);

    if (this->cfg.flags & 0x2)
    {
        mat = globals.camera.mat;

        mat.right *= scale * unit.mat.right.x;
        mat.up *= scale * unit.mat.right.y;
        mat.at *= scale * unit.mat.right.z;
        mat.pos = unit.mat.pos;
    }
    else
    {
        mat = unit.mat;

        mat.right *= scale;
        mat.up *= scale;
        mat.at *= scale;
    }

    uv1.x = this->curve_index * this->texture.size.x + this->cfg.texture.uv[0].x;
    uv1.y = this->curve_index * this->texture.size.y + this->cfg.texture.uv[0].y;
    uv0.x = this->curve_index * this->texture.size.x + this->cfg.texture.uv[1].x;
    uv0.y = this->curve_index * this->texture.size.y + this->cfg.texture.uv[1].y;
}

namespace
{
    void lerp(iColor_tag& out, F32 t, const iColor_tag& a, const iColor_tag& b)
    {
        lerp(out.r, t, a.r, b.r);
        lerp(out.g, t, a.g, b.g);
        lerp(out.b, t, a.b, b.b);
        lerp(out.a, t, a.a, b.a);
    }

    void lerp(U8& out, F32 t, U8 a, U8 b)
    {
        out = ((F32)a + ((F32)b - (F32)a) * t) + 0.5f;
    }
}

S32 xDecalEmitter::select_texture_unit()
{
    switch (this->cfg.texture.mode)
    {
    case TM_RANDOM:
        return (xrand() / 8192) % this->texture.units;
    case TM_CYCLE:
        S32 id = this->texture.prev;
        this->texture.prev = this->texture.prev + 1;
        return id % this->texture.units;
    case TM_DEFAULT:
    default:
        return 0;
    }    
}
