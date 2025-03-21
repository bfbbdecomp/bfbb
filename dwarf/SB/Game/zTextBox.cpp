/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class ztextbox * head_active; // size: 0x4, address: 0x5100C8
static void (* render_bk_table[3])(class ztextbox &); // size: 0xC, address: 0x4E0518
static class tag_type new_tags[1]; // size: 0x14, address: 0x4E0530
static unsigned int new_tags_size; // size: 0x4, address: 0x50F0A0
signed int cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x322DF0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
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
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
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
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class RwSky2DVertexAlignmentOverlay {
    // total size: 0x40
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
class /* @class */ {
    // total size: 0xC
public:
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
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
class RwSky2DVertex {
    // total size: 0x40
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xTextAsset {
    // total size: 0x4
public:
    unsigned int len; // offset 0x0, size 0x4
};
class split_tag {
    // total size: 0x20
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
class callback {
    // total size: 0xC
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
class color_type {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class tag_type {
    // total size: 0x14
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
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
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class /* @class */ {
    // total size: 0x8
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
class basic_rect {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
class RwSky2DVertexFields {
    // total size: 0x40
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
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
class /* @class */ {
    // total size: 0x1
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    unsigned char visible : 1; // offset 0x0, size 0x1
    unsigned char hack_invisible : 1; // offset 0x0, size 0x1
};

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003226A0 -> 0x00322770
*/
// Range: 0x3226A0 -> 0x322770
void render_all() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3226A0 -> 0x322770
        class ztextbox * it; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322770 -> 0x003227A0
*/
// Range: 0x322770 -> 0x3227A0
void update_all() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322770 -> 0x3227A0
        class ztextbox * it; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003227A0 -> 0x003227A8
*/
// Range: 0x3227A0 -> 0x3227A8
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3227A0 -> 0x3227A8
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003227B0 -> 0x003227D8
*/
// Range: 0x3227B0 -> 0x3227D8
void init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3227B0 -> 0x3227D8
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003227E0 -> 0x003228A0
*/
// Range: 0x3227E0 -> 0x3228A0
void get_text(class ztextbox * this /* r2 */, char * buffer /* r18 */, unsigned int buffer_size /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3227E0 -> 0x3228A0
        char * * it; // r16
        char * * end; // r21
        char * s; // r20
        unsigned int len; // r19
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003228A0 -> 0x003228F8
*/
// Range: 0x3228A0 -> 0x3228F8
void refresh(class ztextbox * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3228A0 -> 0x3228F8
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322900 -> 0x00322920
*/
// Range: 0x322900 -> 0x322920
void clear_text(class ztextbox * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322900 -> 0x322920
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322920 -> 0x00322968
*/
// Range: 0x322920 -> 0x322968
void add_text(class ztextbox * this /* r2 */, char * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322920 -> 0x322968
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322970 -> 0x00322A18
*/
// Range: 0x322970 -> 0x322A18
void set_text(class ztextbox * this /* r16 */, unsigned int id /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322970 -> 0x322A18
        class xTextAsset * ta; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322A20 -> 0x00322A78
*/
// Range: 0x322A20 -> 0x322A78
void set_text(class ztextbox * this /* r2 */, char * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322A20 -> 0x322A78
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322A80 -> 0x00322B08
*/
// Range: 0x322A80 -> 0x322B08
void deactivate(class ztextbox * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322A80 -> 0x322B08
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322B10 -> 0x00322B78
*/
// Range: 0x322B10 -> 0x322B78
void activate(class ztextbox * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322B10 -> 0x322B78
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322B80 -> 0x00322BC4
*/
// Range: 0x322B80 -> 0x322BC4
void render_backdrop(class ztextbox * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322B80 -> 0x322BC4
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322BD0 -> 0x00322D38
*/
// Range: 0x322BD0 -> 0x322D38
void reset(class ztextbox * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322BD0 -> 0x322D38
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322D40 -> 0x00322DE4
*/
// Range: 0x322D40 -> 0x322DE4
void load(class ztextbox * this /* r17 */, class asset_type & a /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322D40 -> 0x322DE4
        class RwTexture * tex; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322DF0 -> 0x0032316C
*/
// Range: 0x322DF0 -> 0x32316C
static signed int cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */, float * argf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x322DF0 -> 0x32316C
        class ztextbox & e; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323170 -> 0x00323178
*/
// Range: 0x323170 -> 0x323178
static void parse_tag_blahblah() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323170 -> 0x323178
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323180 -> 0x003233E4
*/
// Range: 0x323180 -> 0x3233E4
static void init_textbox(class ztextbox & e /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323180 -> 0x3233E4
        class asset_type & a; // r16
        signed int lines; // r29+0x4C
        float minh; // r21
        float maxh; // r20
        float hmore; // r2
        unsigned int xjlookup[3]; // @ 0x00500AE0
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003233F0 -> 0x003233F8
*/
// Range: 0x3233F0 -> 0x3233F8
static void render_bk_tex_wrap() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3233F0 -> 0x3233F8
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323400 -> 0x00323A18
*/
// Range: 0x323400 -> 0x323A18
static void render_bk_tex_scale(class ztextbox & e /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323400 -> 0x323A18
        float rcz; // r21
        float nsz; // r20
        class basic_rect r; // r29+0x30
        class RwSky2DVertex vert[6]; // @ 0x005DE060
    }
}

/*
    Compile unit: C:\SB\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323A20 -> 0x00323A64
*/
// Range: 0x323A20 -> 0x323A64
static void render_bk_fill(class ztextbox & e /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323A20 -> 0x323A64
        class asset_type & a; // r3
    }
}

