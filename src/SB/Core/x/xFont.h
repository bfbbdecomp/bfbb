#ifndef XFONT_H
#define XFONT_H

#include "xMath2.h"
#include "iColor.h"
#include "xString.h"

#include <rwcore.h>

struct xfont
{
    U32 id;
    F32 width;
    F32 height;
    F32 space;
    iColor_tag color;
    basic_rect<F32> clip;

    static void init();
    static void set_render_state(RwRaster* raster);
    static void restore_render_state();
    static xfont create();
    static xfont create(U32 id, F32 width, F32 height, F32 space, iColor_tag color,
                        const basic_rect<F32>& clip);

    basic_rect<F32> bounds(char c) const;
    basic_rect<F32> bounds(const char* text) const;
    basic_rect<F32> bounds(const char* text, size_t text_size, F32 max_width,
                               size_t& size) const;
    void start_render() const;
    void stop_render() const;
    void irender(const char* text, F32 x, F32 y) const;
    void irender(const char* text, size_t text_size, F32 x, F32 y) const;
    void render(const char* text, F32 x, F32 y) const;
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
            U16 dummy : 4; // bits 28-31
        } flag;
        // Offset: 0xC
        U16 context_size;

        // Offset: 0x10
        void* context;
        basic_rect<F32> bounds;
        basic_rect<F32> render_bounds;
        const callback* cb;
        tag_type* tag;

        void intersect_flags(const jot& other);
        void reset_flags();
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
        void (*render)(const jot&, const xtextbox&, F32, F32);
        void (*layout_update)(const jot&, xtextbox&, const xtextbox&);
        void (*render_update)(const jot&, xtextbox&, const xtextbox&);
    };

    struct jot_line
    {
        basic_rect<F32> bounds;
        F32 baseline;
        size_t first;
        size_t last;
        U8 page_break;
    };

    struct tag_entry
    {
        substr name;
        char op;
        substr* args;
        size_t args_size;
    };

    struct tag_entry_list
    {
        tag_entry* entries;
        size_t size;
    };

    xfont font;
    basic_rect<F32> bounds;
    U32 flags;
    F32 line_space;
    F32 tab_stop;
    F32 left_indent;
    F32 right_indent;
    callback* cb;
    void* context;
    const char** texts;
    const size_t* text_sizes;
    size_t texts_size;
    substr text;
    size_t text_hash;

    static callback text_cb;

    static void text_render(const jot& j, const xtextbox& tb, F32 x, F32 y);
    static tag_entry_list read_tag(const substr& s);
    static tag_entry* find_entry(const tag_entry_list& el, const substr& name);
    static size_t read_list(const tag_entry& e, F32* v, size_t vsize);
    static size_t read_list(const tag_entry& e, S32* v, size_t vsize);
    static void clear_layout_cache();
    static void register_tags(const tag_type* tag, size_t count);
    static tag_type* find_format_tag(const substr& s);
    static tag_type* find_format_tag(const substr& s, S32& index);
    static xtextbox create();
    static xtextbox create(const xfont& font, const basic_rect<F32>& bounds, U32 flags,
                           F32 line_space, F32 tab_stop, F32 left_indent,
                           F32 right_indent);

    void set_text(const char* text);
    void set_text(const char* text, size_t text_size);
    void set_text(const char** texts, size_t size);
    void set_text(const char** texts, const size_t* text_sizes, size_t size);
    layout& temp_layout(bool cache) const;
    void render(bool cache) const;
    void render(layout& l, S32 begin_jot, S32 end_jot) const;
    F32 yextent(F32 max, S32& size, bool cache) const;
    F32 yextent(F32 max, S32& size, const layout& l, S32 begin_jot,
                    S32 end_jot) const;
};

struct xtextbox::layout
{
    xtextbox tb;
    jot _jots[512];
    size_t _jots_size;
    jot_line _lines[128];
    size_t _lines_size;
    U8 context_buffer[1024];
    size_t context_buffer_size;
    U16 dynamics[64];
    size_t dynamics_size;

    void refresh(const xtextbox& tb, bool force);
    void refresh_end(const xtextbox& tb);
    void clear();
    void trim_line(jot_line& line);
    void erase_jots(size_t begin_jot, size_t end_jot);
    void merge_line(jot_line& line);
    void bound_line(jot_line& line);
    bool fit_line();
    void next_line();
    void calc(const xtextbox& ctb, size_t start_text);
    void render(const xtextbox& ctb, S32 begin_jot, S32 end_jot);
    F32 yextent(F32 max, S32& size, S32 begin_jot, S32 end_jot) const;
    bool changed(const xtextbox& ctb);
    size_t jots_size() const;
};

void render_fill_rect(const basic_rect<F32>& bounds, iColor_tag color);

F32 NSCREENX(F32);
F32 NSCREENY(F32);

#endif
