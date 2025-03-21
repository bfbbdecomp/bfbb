/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
class xIniSection {
    // total size: 0xC
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
class xIniFile {
    // total size: 0x214
public:
    signed int NumValues; // offset 0x0, size 0x4
    signed int NumSections; // offset 0x4, size 0x4
    class xIniValue * Values; // offset 0x8, size 0x4
    class xIniSection * Sections; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    char name[256]; // offset 0x14, size 0x100
    char pathname[256]; // offset 0x114, size 0x100
};
class xIniValue {
    // total size: 0x8
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC930 -> 0x001ECA00
*/
// Range: 0x1EC930 -> 0x1ECA00
char * xIniGetString(class xIniFile * ini /* r20 */, char * tok /* r19 */, char * def /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EC930 -> 0x1ECA00
    }
}

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECA00 -> 0x001ECAE0
*/
// Range: 0x1ECA00 -> 0x1ECAE0
float xIniGetFloat(class xIniFile * ini /* r19 */, char * tok /* r18 */, float def /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ECA00 -> 0x1ECAE0
    }
}

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECAE0 -> 0x001ECBB8
*/
// Range: 0x1ECAE0 -> 0x1ECBB8
signed int xIniGetInt(class xIniFile * ini /* r20 */, char * tok /* r19 */, signed int def /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ECAE0 -> 0x1ECBB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECBC0 -> 0x001ECC08
*/
// Range: 0x1ECBC0 -> 0x1ECC08
void xIniDestroy(class xIniFile * ini /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ECBC0 -> 0x1ECC08
    }
}

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECC10 -> 0x001ED184
*/
// Range: 0x1ECC10 -> 0x1ED184
class xIniFile * xIniParse(char * buf /* r18 */, signed int len /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ECC10 -> 0x1ED184
        signed int i; // r7
        signed int ccr; // r16
        signed int clf; // r6
        signed int copen; // r17
        signed int lastCRLF; // r20
        char * c; // r2
        char * lastLine; // r17
        char * line; // r18
        char * ltoken; // r29+0x6C
        class xIniFile * ini; // r16
    }
}

