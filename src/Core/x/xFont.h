#ifndef XFONT_H
#define XFONT_H

#include "xMath2.h"
#include "../p2/iColor.h"
#include "xString.h"

#include <rwcore.h>

#define XFONT_ID_1 1

struct xfont
{
    uint32 id;
    float32 width;
    float32 height;
    float32 space;
    iColor_tag color;
    basic_rect<float32> clip;

    static void set_render_state(RwRaster* raster);
    static void restore_render_state();

    xfont& operator=(const xfont& other);
};

struct xtextbox
{
    struct callback;
    struct tag_type;
    struct layout;

    struct jot
    {
        substr s;

        // Offset: 0x8
        struct
        {
            struct
            {
                bool invisible : 1;
                bool ethereal : 1;
                bool merge : 1;
                bool word_break : 1;
                bool word_end : 1;
                bool line_break : 1;
                bool stop : 1;
                bool tab : 1;
            } lower;
            struct
            {
                bool insert : 1;
                bool dynamic : 1;
                bool page_break : 1;
                bool stateful : 1;
            } upper;
            uint16 dummy : 4;

            // Added speculatively. More offset is almost certainly needed to
            // put context_size / context at the right offset, but I don't know
            // exactly where that offset should be in the struct.
            uint16 padding : 16;
        } flag;
        // Offset: 0xC
        uint16 context_size;

        // Offset: 0x10
        void* context;
        basic_rect<float32> bounds;
        basic_rect<float32> render_bounds;
        callback* cb;
        tag_type* tag;
    };

    struct split_tag
    {
        substr tag;
        substr name;
        substr action;
        substr value;
    };

    struct tag_type
    {
        substr name;
        void (*parse_tag)(jot&, const xtextbox&, const xtextbox&, const split_tag&);
        void (*reset_tag)(jot&, const xtextbox&, const xtextbox&, const split_tag&);
        void* context;
    };

    struct callback
    {
        void (*render)(jot&, xtextbox&, float32, float32);
        void (*layout_update)(jot&, xtextbox&, xtextbox&);
        void (*render_update)(jot&, xtextbox&, xtextbox&);
    };

    struct jot_line
    {
        basic_rect<float32> bounds;
        float32 baseline;
        uint32 first;
        uint32 last;
        uint8 page_break;
    };

    xfont font;
    basic_rect<float32> bounds;
    uint32 flags;
    float32 line_space;
    float32 tab_stop;
    float32 left_indent;
    float32 right_indent;
    callback* cb;
    void* context;
    int8** texts;
    uint32* text_sizes;
    uint32 texts_size;
    substr text;
    uint32 text_hash;

    static void register_tags(const tag_type* tag, unsigned long count);

    void render(bool cache) const;
    void render(layout& ctb, int32 begin_jot, int32 end_jot) const;
    layout& temp_layout(bool cache) const;
    float32 yextent(float32 max, int32& size, bool cache) const;
    float32 yextent(float32 max, int32& size, const layout& l, int32 begin_jot,
                    int32 end_jot) const;
    void set_text(const char* text);
    void set_text(const char** texts, ulong32 size);
};

void render_fill_rect(const basic_rect<float32>& bounds, iColor_tag color);

float32 NSCREENX(float32);
float32 NSCREENY(float32);

#endif