/*
    Compile unit: C:\SB\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA330 -> 0x001AA3EC
*/
// Range: 0x1AA330 -> 0x1AA3EC
unsigned int iFMVPlay(char * filename /* r18 */, unsigned int buttons /* r17 */, float time /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AA330 -> 0x1AA3EC
        class RwResEntry * repEntry; // r16
        class RwResEntry * repEntryOwner; // r29+0x5C
    }
}

