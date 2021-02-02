#ifndef XDECAL_H
#define XDECAL_H

#include <types.h>

enum texture_mode
{
    TM_DEFAULT,
    TM_RANDOM,
    TM_CYCLE,
    MAX_TM,
    FORCE_INT_TM = 0xffffffff
};

struct xVec2
{
    float32 x;
    float32 y;
};

struct xVec3
{
    float32 x;
    float32 y;
    float32 z;
};

struct RwObject
{
    uint8 type;
    uint8 subType;
    uint8 flags;
    uint8 privateFlags;
    void* parent;
};

struct RwRaster
{
    RwRaster* parent;
    uint8* cpPixels;
    uint8* palette;
    int32 width;
    int32 height;
    int32 depth;
    int32 stride;
    int16 nOffsetX;
    int16 nOffsetY;
    uint8 cType;
    uint8 cFlags;
    uint8 privateFlags;
    uint8 cFormat;
    uint8* originalPixels;
    int32 originalWidth;
    int32 originalHeight;
    int32 originalStride;
};

struct RwLLLink
{
    RwLLLink* next;
    RwLLLink* prev;
};

struct RwLinkList
{
    RwLLLink link;
};

struct RwTexDictionary
{
    RwObject object;
    RwLinkList texturesInDict;
    RwLLLink lInInstance;
};

struct RwTexture
{
    RwRaster* raster;
    RwTexDictionary* dict;
    RwLLLink lInDictionary;
    int8 name[32];
    int8 mask[32];
    uint32 filterAddressing;
    int32 refCount;
};

struct _class_3
{
    xVec2 uv[2];
    uint8 rows;
    uint8 cols;
    texture_mode mode;
};

struct _class_5
{
    RwTexture* asset;
    uint32 units;
    xVec2 size;
    xVec2 isize;
    int32 prev;
};

struct config
{
    uint32 flags;
    float32 life_time;
    uint32 blend_src;
    uint32 blend_dst;
    _class_3 texture;
};

struct xMat3x3
{
    xVec3 right;
    int32 flags;
    xVec3 up;
    uint32 pad1;
    xVec3 at;
    uint32 pad2;
};

struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    uint32 pad3;
};

struct unit_data
{
    uint8 flags;
    uint8 curve_index;
    uint8 u;
    uint8 v;
    float32 frac;
    float32 age;
    float32 cull_size;
    xMat4x3 mat;
};

struct static_queue
{
    uint32 _first;
    uint32 _size;
    uint32 _max_size;
    uint32 _max_size_mask;
    unit_data* _buffer;
};

struct iColor_tag
{
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;
};

struct curve_node
{
    float32 time;
    iColor_tag color;
    float32 scale;
};

struct xDecalEmitter
{
    config cfg;
    _class_5 texture;
    static_queue units;
    curve_node* curve;
    uint32 curve_size;
    uint32 curve_index;
    float32 ilife;

    void get_render_data(unit_data& unit, float32 scale, iColor_tag& color, xMat4x3& mat,
                         xVec2& uv0, xVec2& uv1);
    void update(float32 dt);
    void emit(xMat4x3& mat, xVec3& scale, int32 texture_index);
    void emit(xMat4x3& mat, int32 texture_index);
    void set_curve(curve_node* curve, uint32 size);
    void refresh_config();
    void set_texture(int8* name);
    void set_default_config();
    void init(int32 max_size);
};

void xDecalInit();
void xDecalUpdate(float32 dt);
void xDecalDestroy();
void xDecalRender();

#endif