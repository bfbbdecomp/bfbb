/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x508AA0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static char * preset_names[5]; // size: 0x14, address: 0x0
float dtscale; // size: 0x4, address: 0x50F188
static float credits_time; // size: 0x4, address: 0x50F18C
static class xCreditsData * credits_data; // size: 0x4, address: 0x51032C
static unsigned int credits_parentID; // size: 0x4, address: 0x510330
class callback text_cb; // size: 0xC, address: 0x4F87A8
class xCMcredits {
    // total size: 0x38
public:
    unsigned int credits_size; // offset 0x0, size 0x4
    float len; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    class sxy in; // offset 0xC, size 0x8
    class sxy out; // offset 0x14, size 0x8
    float scroll_rate; // offset 0x1C, size 0x4
    float lifetime; // offset 0x20, size 0x4
    class fade fin; // offset 0x24, size 0x8
    class fade fout; // offset 0x2C, size 0x8
    unsigned int num_presets; // offset 0x34, size 0x4
};
class xCMpreset {
    // total size: 0x4C
public:
    unsigned short num; // offset 0x0, size 0x2
    unsigned short align; // offset 0x2, size 0x2
    float delay; // offset 0x4, size 0x4
    float innerspace; // offset 0x8, size 0x4
    class xCMtextbox box[2]; // offset 0xC, size 0x40
};
class xCMhunk {
    // total size: 0x18
public:
    unsigned int hunk_size; // offset 0x0, size 0x4
    unsigned int preset; // offset 0x4, size 0x4
    float t0; // offset 0x8, size 0x4
    float t1; // offset 0xC, size 0x4
    char * text1; // offset 0x10, size 0x4
    char * text2; // offset 0x14, size 0x4
};
class xCMtexture {
    // total size: 0x20
public:
    unsigned int assetID; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float w; // offset 0x10, size 0x4
    float h; // offset 0x14, size 0x4
    class RwTexture * texture; // offset 0x18, size 0x4
    unsigned int pad; // offset 0x1C, size 0x4
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
class xCMheader {
    // total size: 0x18
public:
    unsigned int magic; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int crdID; // offset 0x8, size 0x4
    unsigned int state; // offset 0xC, size 0x4
    float total_time; // offset 0x10, size 0x4
    unsigned int total_size; // offset 0x14, size 0x4
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
class sxy {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class fade {
    // total size: 0x8
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
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
class split_tag {
    // total size: 0x20
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
class callback {
    // total size: 0xC
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
class tag_type {
    // total size: 0x14
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
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
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
class xCreditsData {
    // total size: 0x4
public:
    unsigned int dummy; // offset 0x0, size 0x4
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
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class xColorUnpack {
    // total size: 0x4
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char g; // offset 0x2, size 0x1
    unsigned char r; // offset 0x3, size 0x1
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class xCMtextbox {
    // total size: 0x20
public:
    unsigned int font; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    class sxy char_size; // offset 0x8, size 0x8
    class sxy char_spacing; // offset 0x10, size 0x8
    class sxy box; // offset 0x18, size 0x8
};

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5CD0 -> 0x003D5D04
*/
// Range: 0x3D5CD0 -> 0x3D5D04
void xCMstop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5CD0 -> 0x3D5D04
    }
}

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5D10 -> 0x003D5D30
*/
// Range: 0x3D5D10 -> 0x3D5D30
void xCMstart(class xCreditsData * data /* r2 */, class xBase * parent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5D10 -> 0x3D5D30
    }
}

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5D30 -> 0x003D5D3C
*/
// Range: 0x3D5D30 -> 0x3D5D3C
void xCMrender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5D30 -> 0x3D5D3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5D40 -> 0x003D5DAC
*/
// Range: 0x3D5D40 -> 0x3D5DAC
void xCMupdate(float dt /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5D40 -> 0x3D5DAC
    }
}

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5DB0 -> 0x003D7104
*/
// Range: 0x3D5DB0 -> 0x3D7104
static unsigned int xCMrender(float time /* r23 */, class xCreditsData * data /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D5DB0 -> 0x3D7104
        class xCMheader * hdr; // r2
        char * dp; // r18
        class xCMcredits * cp; // r2
        class xCMpreset * pp; // r29+0xD0
        class xCMhunk * hp; // r17
        float a; // r1
        class xCMpreset * preset; // r16
        float nx; // r5
        float ny; // r22
        float x0; // r24
        float x1; // r22
        float y0; // r21
        float y1; // r20
        float ca; // r21
        class xCMtexture * tex; // r21
        class basic_rect bounds; // r29+0x4C0
        class xtextbox tb; // r29+0x450
        unsigned int alignL; // r10
        unsigned int alignR; // r21
        class basic_rect bounds; // r29+0x440
        class xtextbox tb; // r29+0x3D0
        class basic_rect bounds; // r29+0x3C0
        class xtextbox tb; // r29+0x350
    }
}

/*
    Compile unit: C:\SB\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7110 -> 0x003D7280
*/
// Range: 0x3D7110 -> 0x3D7280
static void xCMprep(class xCreditsData * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D7110 -> 0x3D7280
        class xCMheader * hdr; // r2
        char * dp; // r6
        class xCMcredits * cp; // r2
        class xCMpreset * pp; // r5
        class xCMhunk * hp; // r3
    }
}

