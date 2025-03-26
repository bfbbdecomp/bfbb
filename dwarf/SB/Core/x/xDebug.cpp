/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static char xStatsFieldName[35][32]; // size: 0x460, address: 0x0
unsigned int gFrameCount; // size: 0x4, address: 0x50F94C
class callback text_cb; // size: 0xC, address: 0x4F87A8
class iColor_tag g_WHITE; // size: 0x4, address: 0x4F80A0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
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
class xSB {
    // total size: 0x10
public:
    char * buf; // offset 0x0, size 0x4
    unsigned int max; // offset 0x4, size 0x4
    char * cur; // offset 0x8, size 0x4
    char * disp; // offset 0xC, size 0x4
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
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BB0 -> 0x001D0BB8
*/
// Range: 0x1D0BB0 -> 0x1D0BB8
void xDebugTimestampScreen() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0BB0 -> 0x1D0BB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BC0 -> 0x001D0BC8
*/
// Range: 0x1D0BC0 -> 0x1D0BC8
void xDebugExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0BC0 -> 0x1D0BC8
    }
}

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BD0 -> 0x001D0BD8
*/
// Range: 0x1D0BD0 -> 0x1D0BD8
void xDebugUpdate() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0BD0 -> 0x1D0BD8
    }
}

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BE0 -> 0x001D0BE8
*/
// Range: 0x1D0BE0 -> 0x1D0BE8
void xDebugInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0BE0 -> 0x1D0BE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BF0 -> 0x001D0BF8
*/
// Range: 0x1D0BF0 -> 0x1D0BF8
signed int xDebugModeAdd() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0BF0 -> 0x1D0BF8
    }
}

/*
    Compile unit: C:\SB\Core\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0C00 -> 0x001D0C28
*/
// Range: 0x1D0C00 -> 0x1D0C28
void xprintf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1D0C00 -> 0x1D0C28
    }
}

