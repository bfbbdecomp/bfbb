#ifndef ZTEXTBOX_H
#define ZTEXTBOX_H

#include "../Core/x/xDynAsset.h"
#include "../Core/x/xFont.h"
#include "../Core/x/xScene.h"

#include <rwcore.h>

struct ztextbox : xBase
{
    struct asset_type : xDynAsset
    {
        struct color_type
        {
            uint8 r;
            uint8 g;
            uint8 b;
            uint8 a;
        };

        uint32 text;
        basic_rect<float32> bounds;
        uint32 font;
        struct
        {
            float32 width;
            float32 height;
        } size;
        struct
        {
            float32 x;
            float32 y;
        } space;
        color_type color;
        struct
        {
            float32 left;
            float32 top;
            float32 right;
            float32 bottom;
        } inset;
        enum
        {
            XJ_LEFT,
            XJ_CENTER,
            XJ_RIGHT
        } xjustify;
        enum
        {
            EX_UP,
            EX_CENTER,
            EX_DOWN,
            MAX_EX
        } expand;
        float32 max_height;
        struct
        {
            uint32 type;
            color_type color;
            uint32 texture;
        } backdrop;
    };

    struct
    {
        bool active : 1; // bit 24
        bool dirty : 1; // bit 25
        bool show_backdrop : 1; // bit 26
        bool visible : 1; // bit 27
        bool hack_invisible : 1; // bit 28
    } flag;
    asset_type* asset;
    xtextbox tb;
    const char* segments[16];
    uint32 segments_size;
    ztextbox* next;
    ztextbox* prev;
    RwRaster* bgtex;

    static void init();
    static void load(xBase& data, xDynAsset& asset, ulong32);
    static void update_all(xScene& s, float32 dt);
    static void render_all();

    void load(const asset_type& a);
    void update(xScene&, float32);
    void reset();
    void render();
    void render_backdrop();
    void activate();
    void deactivate();
    void set_text(const char* s);
    void set_text(uint32 id);
    void add_text(const char* s);
    void add_text(uint32 id);
    void clear_text();
    void refresh();
    void get_text(char* buffer, uint32 buffer_size) const;
    bool visible();
};

#endif