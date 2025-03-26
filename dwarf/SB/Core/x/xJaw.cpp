/*
    Compile unit: C:\SB\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class xJawDataTable {
    // total size: 0xC
public:
    unsigned int soundHashID; // offset 0x0, size 0x4
    unsigned int dataStart; // offset 0x4, size 0x4
    unsigned int dataLength; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D2C0 -> 0x0035D3F4
*/
// Range: 0x35D2C0 -> 0x35D3F4
float xJaw_EvalData(void * data /* r18 */, float time /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35D2C0 -> 0x35D3F4
        float lerp; // r2
        signed int idx; // r16
        signed int numdata; // r17
        unsigned char * jawdata; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D400 -> 0x0035D4E8
*/
// Range: 0x35D400 -> 0x35D4E8
void * xJaw_FindData(unsigned int soundID /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x35D400 -> 0x35D4E8
        signed int i; // r17
        signed int numJawTables; // r16
        unsigned int j; // r7
        void * data; // r2
        unsigned int jawcount; // r6
        class xJawDataTable * tbl; // r5
        void * rawdata; // r4
    }
}

