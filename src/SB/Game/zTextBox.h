#ifndef ZTEXTBOX_H
#define ZTEXTBOX_H

#include "xDynAsset.h"
#include "xFont.h"
#include "xScene.h"

#include <rwcore.h>

struct ztextbox : xBase
{
    struct asset_type : xDynAsset
    {
        struct color_type
        {
            U8 r;
            U8 g;
            U8 b;
            U8 a;
        };

        U32 text;
        basic_rect<F32> bounds;
        U32 font;
        struct
        {
            F32 width;
            F32 height;
        } size;
        struct
        {
            F32 x;
            F32 y;
        } space;
        color_type color;
        struct
        {
            F32 left;
            F32 top;
            F32 right;
            F32 bottom;
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
        F32 max_height;
        struct
        {
            U32 type;
            color_type color;
            U32 texture;
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
    U32 segments_size;
    ztextbox* next;
    ztextbox* prev;
    RwRaster* bgtex;

    static void init();
    static void load(xBase& data, xDynAsset& asset, size_t);
    static void update_all(xScene& s, F32 dt);
    static void render_all();

    void load(const asset_type& a);
    void update(xScene&, F32);
    void reset();
    void render();
    void render_backdrop();
    void activate();
    void deactivate();
    void set_text(const char* s);
    void set_text(U32 id);
    void add_text(const char* s);
    void add_text(U32 id);
    void clear_text();
    void refresh();
    void get_text(char* buffer, U32 buffer_size) const;
    bool visible();
};

#endif
