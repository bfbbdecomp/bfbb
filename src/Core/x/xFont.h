#ifndef XFONT_H
#define XFONT_H

#include "xMath2.h"
#include "../p2/iColor.h"
#include "xString.h"

#include <rwcore.h>

struct xfont
{
    uint32 id;
    float32 width;
    float32 height;
    float32 space;
    iColor_tag color;
    basic_rect<float32> clip;

    static void init();
    static void set_render_state(RwRaster* raster);
    static void restore_render_state();
    static xfont create();
    static xfont create(uint32 id, float32 width, float32 height, float32 space, iColor_tag color,
                        const basic_rect<float32>& clip);

    basic_rect<float32> bounds(char c) const;
    basic_rect<float32> bounds(const char* text) const;
    basic_rect<float32> bounds(const char* text, ulong32 text_size, float32 max_width,
                               ulong32& size) const;
    void start_render() const;
    void stop_render() const;
    void irender(const char* text, float32 x, float32 y) const;
    void irender(const char* text, ulong32 text_size, float32 x, float32 y) const;
    void render(const char* text, float32 x, float32 y) const;

    ASSIGNMENT_OPERATOR(xfont)
};

struct xtextbox
{
    struct callback;
    struct tag_type;
    struct layout;

    struct jot
    {
        substr s;

        struct
        {
            // Offset: 0x8
            bool invisible : 1; // bit 24
            bool ethereal : 1; // bit 25
            bool merge : 1; // bit 26
            bool word_break : 1; // bit 27
            bool word_end : 1; // bit 28
            bool line_break : 1; // bit 29
            bool stop : 1; // bit 30
            bool tab : 1; // bit 31

            // Offset: 0x9
            bool insert : 1; // bit 24
            bool dynamic : 1; // bit 25
            bool page_break : 1; // bit 26
            bool stateful : 1; // bit 27
            uint16 dummy : 4; // bits 28-31
        } flag;
        // Offset: 0xC
        uint16 context_size;

        // Offset: 0x10
        void* context;
        basic_rect<float32> bounds;
        basic_rect<float32> render_bounds;
        const callback* cb;
        tag_type* tag;

        void intersect_flags(const jot& other);
        void reset_flags();

        ASSIGNMENT_OPERATOR(jot)
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

        ASSIGNMENT_OPERATOR(tag_type)
    };

    struct callback
    {
        void (*render)(const jot&, const xtextbox&, float32, float32);
        void (*layout_update)(const jot&, xtextbox&, const xtextbox&);
        void (*render_update)(const jot&, xtextbox&, const xtextbox&);
    };

    struct jot_line
    {
        basic_rect<float32> bounds;
        float32 baseline;
        ulong32 first;
        ulong32 last;
        uint8 page_break;
    };

    struct tag_entry
    {
        substr name;
        char op;
        substr* args;
        ulong32 args_size;
    };

    struct tag_entry_list
    {
        tag_entry* entries;
        ulong32 size;
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
    const char** texts;
    const ulong32* text_sizes;
    ulong32 texts_size;
    substr text;
    ulong32 text_hash;

    static callback text_cb;

    static void text_render(const jot& j, const xtextbox& tb, float32 x, float32 y);
    static tag_entry_list read_tag(const substr& s);
    static tag_entry* find_entry(const tag_entry_list& el, const substr& name);
    static ulong32 read_list(const tag_entry& e, float32* v, ulong32 vsize);
    static ulong32 read_list(const tag_entry& e, int32* v, ulong32 vsize);
    static void clear_layout_cache();
    static void register_tags(const tag_type* tag, ulong32 count);
    static tag_type* find_format_tag(const substr& s);
    static tag_type* find_format_tag(const substr& s, int32& index);
    static xtextbox create();
    static xtextbox create(const xfont& font, const basic_rect<float32>& bounds, uint32 flags,
                           float32 line_space, float32 tab_stop, float32 left_indent,
                           float32 right_indent);

    void set_text(const char* text);
    void set_text(const char* text, ulong32 text_size);
    void set_text(const char** texts, ulong32 size);
    void set_text(const char** texts, const ulong32* text_sizes, ulong32 size);
    layout& temp_layout(bool cache) const;
    void render(bool cache) const;
    void render(layout& l, int32 begin_jot, int32 end_jot) const;
    float32 yextent(float32 max, int32& size, bool cache) const;
    float32 yextent(float32 max, int32& size, const layout& l, int32 begin_jot,
                    int32 end_jot) const;

    ASSIGNMENT_OPERATOR(xtextbox)
};

struct xtextbox::layout
{
    xtextbox tb;
    jot _jots[512];
    ulong32 _jots_size;
    jot_line _lines[128];
    ulong32 _lines_size;
    uint8 context_buffer[1024];
    ulong32 context_buffer_size;
    uint16 dynamics[64];
    ulong32 dynamics_size;

    void refresh(const xtextbox& tb, bool force);
    void refresh_end(const xtextbox& tb);
    void clear();
    void trim_line(jot_line& line);
    void erase_jots(ulong32 begin_jot, ulong32 end_jot);
    void merge_line(jot_line& line);
    void bound_line(jot_line& line);
    bool fit_line();
    void next_line();
    void calc(const xtextbox& ctb, ulong32 start_text);
    void render(const xtextbox& ctb, int32 begin_jot, int32 end_jot);
    float32 yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot) const;
    bool changed(const xtextbox& ctb);
    ulong32 jots_size() const;
};

void render_fill_rect(const basic_rect<float32>& bounds, iColor_tag color);

float32 NSCREENX(float32);
float32 NSCREENY(float32);

#endif