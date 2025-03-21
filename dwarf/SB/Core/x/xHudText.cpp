/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x508A80
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
struct /* @anon0 */ {
    // total size: 0x28
} __vt__Q24xhud11text_widget; // size: 0x28, address: 0x50E400
class callback text_cb; // size: 0xC, address: 0x4F87A8
class iColor_tag g_WHITE; // size: 0x4, address: 0x4F80A0
struct /* @anon1 */ {
    // total size: 0x28
} __vt__Q24xhud6widget; // size: 0x28, address: 0x508D70
class xtextbox {
    // total size: 0x68
public:
    class xfont font; // offset 0x0, size 0x24
    class basic_rect bounds; // offset 0x24, size 0x10
    unsigned int flags; // offset 0x34, size 0x4
    float line_space; // offset 0x38, size 0x4
    float tab_stop; // offset 0x3C, size 0x4
    float left_indent; // offset 0x40, size 0x4
    float right_indent; // offset 0x44, size 0x4
    class callback * cb; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    char * * texts; // offset 0x50, size 0x4
    unsigned int * text_sizes; // offset 0x54, size 0x4
    unsigned int texts_size; // offset 0x58, size 0x4
    class substr text; // offset 0x5C, size 0x8
    unsigned int text_hash; // offset 0x64, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
class split_tag {
    // total size: 0x20
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
class xTextAsset {
    // total size: 0x4
public:
    unsigned int len; // offset 0x0, size 0x4
};
class tag_type {
    // total size: 0x14
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
class callback {
    // total size: 0xC
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
class motive_node {
    // total size: 0x28
public:
    class motive m; // offset 0x0, size 0x24
    class motive_node * next; // offset 0x24, size 0x4
};
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
class widget {
    // total size: 0x84
public:
    class /* @class */ {
        // total size: 0x2
    public:
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
    } flag; // offset 0x0, size 0x2
    class render_context rc; // offset 0x4, size 0x34
    class render_context start_rc; // offset 0x38, size 0x34
    class asset * a; // offset 0x6C, size 0x4
    enum /* @enum */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x70, size 0x4
    class motive_node * _motive_top; // offset 0x78, size 0x4
    class motive_node * _motive_temp; // offset 0x7C, size 0x4
    class motive_node * * _motive_temp_tail; // offset 0x80, size 0x4
};
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
class ztextbox : public xBase {
    // total size: 0xD0
public:
    class /* @class */ {
        // total size: 0x1
    public:
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dirty : 1; // offset 0x0, size 0x1
        unsigned char show_backdrop : 1; // offset 0x0, size 0x1
        unsigned char visible : 1; // offset 0x0, size 0x1
        unsigned char hack_invisible : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x68
    char * segments[16]; // offset 0x80, size 0x40
    unsigned int segments_size; // offset 0xC0, size 0x4
    class ztextbox * next; // offset 0xC4, size 0x4
    class ztextbox * prev; // offset 0xC8, size 0x4
    class RwRaster * bgtex; // offset 0xCC, size 0x4
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class text_widget : public widget {
    // total size: 0x16C
public:
    char text[128]; // offset 0x84, size 0x80
    class xtextbox tb; // offset 0x104, size 0x68
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class render_context {
    // total size: 0x34
public:
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 size; // offset 0xC, size 0xC
    class xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
};
class /* @class */ {
    // total size: 0x1
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    unsigned char visible : 1; // offset 0x0, size 0x1
    unsigned char hack_invisible : 1; // offset 0x0, size 0x1
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class xfont {
    // total size: 0x24
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    class basic_rect clip; // offset 0x14, size 0x10
};
class basic_rect {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
class asset : public xDynAsset {
    // total size: 0x28
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
class /* @class */ {
    // total size: 0xC
public:
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
};
class asset_type : public xDynAsset {
    // total size: 0x64
public:
    unsigned int text; // offset 0x10, size 0x4
    class basic_rect bounds; // offset 0x14, size 0x10
    unsigned int font; // offset 0x24, size 0x4
    class /* @class */ {
        // total size: 0x8
    public:
        float width; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
    } size; // offset 0x28, size 0x8
    class /* @class */ {
        // total size: 0x8
    public:
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } space; // offset 0x30, size 0x8
    class color_type color; // offset 0x38, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float right; // offset 0x8, size 0x4
        float bottom; // offset 0xC, size 0x4
    } inset; // offset 0x3C, size 0x10
    enum /* @enum */ {
        XJ_LEFT = 0,
        XJ_CENTER = 1,
        XJ_RIGHT = 2,
    } xjustify; // offset 0x4C, size 0x4
    enum /* @enum */ {
        EX_UP = 0,
        EX_CENTER = 1,
        EX_DOWN = 2,
        MAX_EX = 3,
    } expand; // offset 0x50, size 0x4
    float max_height; // offset 0x54, size 0x4
    class /* @class */ {
        // total size: 0xC
    public:
        unsigned int type; // offset 0x0, size 0x4
        class color_type color; // offset 0x4, size 0x4
        unsigned int texture; // offset 0x8, size 0x4
    } backdrop; // offset 0x58, size 0xC
};
class /* @class */ {
    // total size: 0x2
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned short dummy : 4; // offset 0x0, size 0x2
};
class motive {
    // total size: 0x24
public:
    float * value; // offset 0x0, size 0x4
    float delta; // offset 0x4, size 0x4
    float start_delta; // offset 0x8, size 0x4
    float max_offset; // offset 0xC, size 0x4
    float offset; // offset 0x10, size 0x4
    float accel; // offset 0x14, size 0x4
    unsigned char (* fp_update)(class widget &, class motive &, float); // offset 0x18, size 0x4
    void * context; // offset 0x1C, size 0x4
    unsigned char inverse; // offset 0x20, size 0x1
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class color_type {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class text_asset : public asset {
    // total size: 0x30
public:
    unsigned int text_box; // offset 0x28, size 0x4
    unsigned int text; // offset 0x2C, size 0x4
};
class jot {
    // total size: 0x38
public:
    class substr s; // offset 0x0, size 0x8
    class /* @class */ {
        // total size: 0x2
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x2
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
};
class /* @class */ {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x28
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
struct /* @anon1 */ {
    // total size: 0x28
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5490 -> 0x003D565C
*/
// Range: 0x3D5490 -> 0x3D565C
void render(class text_widget * this /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5490 -> 0x3D565C
        float x; // r21
        float y; // r20
        unsigned char r; // r19
        unsigned char g; // r18
        unsigned char b; // r17
        unsigned char a; // r16
        float floatA; // r1
        unsigned char newA; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5660 -> 0x003D5840
*/
// Range: 0x3D5660 -> 0x3D5840
void update(class text_widget * this /* r16 */, float dt /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5660 -> 0x3D5840
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5840 -> 0x003D58AC
*/
// Range: 0x3D5840 -> 0x3D58AC
unsigned char is(class text_widget * this /* r17 */, unsigned int id /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5840 -> 0x3D58AC
        unsigned int myid; // @ 0x00510324
        signed char @3835; // @ 0x00510328
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D58B0 -> 0x003D58E8
*/
// Range: 0x3D58B0 -> 0x3D58E8
unsigned int type() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D58B0 -> 0x3D58E8
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D58F0 -> 0x003D58F8
*/
// Range: 0x3D58F0 -> 0x3D58F8
void destroy(class text_widget * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D58F0 -> 0x3D58F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5900 -> 0x003D5C70
*/
// Range: 0x3D5900 -> 0x3D5C70
void setup(class text_widget * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5900 -> 0x3D5C70
        class text_asset & ta; // r17
        class ztextbox * ztb; // r16
        class xTextAsset * t; // r2
        char * s; // r17
        unsigned int len; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5C70 -> 0x003D5CCC
*/
// Range: 0x3D5C70 -> 0x3D5CCC
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5C70 -> 0x3D5CCC
    }
}

