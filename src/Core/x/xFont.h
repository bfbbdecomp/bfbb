#ifndef XFONT_H
#define XFONT_H

#include "xMath2.h"
#include "../p2/iColor.h"
#include "xString.h"

struct xTextAsset
{
    uint32 len;
};

struct xfont
{
    uint32 id;
    float32 width;
    float32 height;
    float32 space;
    iColor_tag color;
    basic_rect<float32> clip;
};

struct xtextbox
{
    struct callback;
    struct tag_type;

    struct jot
    {
        substr s;
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
            };
            struct
            {
                bool insert : 1;
                bool dynamic : 1;
                bool page_break : 1;
                bool stateful : 1;
            };
            uint16 dummy : 4;
        } flag;
        uint16 context_size;
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
        void (*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
        void (*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
        void* context;
    };

    struct callback
    {
        void (*render)(jot&, xtextbox&, float32, float32);
        void (*layout_update)(jot&, xtextbox&, xtextbox&);
        void (*render_update)(jot&, xtextbox&, xtextbox&);
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
};

#endif