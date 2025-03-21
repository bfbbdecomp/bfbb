/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class VoBuf {
    // total size: 0x14
public:
    class VoData * data; // offset 0x0, size 0x4
    class VoTag * tag; // offset 0x4, size 0x4
    signed int write; // offset 0x8, size 0x4
    signed int count; // offset 0xC, size 0x4
    signed int size; // offset 0x10, size 0x4
};
class VoTag {
    // total size: 0x39240
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][29248]; // offset 0x40, size 0x39200
};
class VoData {
    // total size: 0x12C000
public:
    unsigned char v[1228800]; // offset 0x0, size 0x12C000
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF390 -> 0x001BF3B0
*/
// Range: 0x1BF390 -> 0x1BF3B0
void voBufDecCount(class VoBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF390 -> 0x1BF3B0
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF3B0 -> 0x001BF428
*/
// Range: 0x1BF3B0 -> 0x1BF428
class VoTag * voBufGetTag(class VoBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF3B0 -> 0x1BF428
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF430 -> 0x001BF478
*/
// Range: 0x1BF430 -> 0x1BF478
class VoData * voBufGetData(class VoBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF430 -> 0x1BF478
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF480 -> 0x001BF50C
*/
// Range: 0x1BF480 -> 0x1BF50C
void voBufIncCount(class VoBuf * f /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF480 -> 0x1BF50C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF510 -> 0x001BF524
*/
// Range: 0x1BF510 -> 0x1BF524
signed int voBufIsFull(class VoBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF510 -> 0x1BF524
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF530 -> 0x001BF53C
*/
// Range: 0x1BF530 -> 0x1BF53C
void voBufReset(class VoBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF530 -> 0x1BF53C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF540 -> 0x001BF548
*/
// Range: 0x1BF540 -> 0x1BF548
void voBufDelete() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF540 -> 0x1BF548
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF550 -> 0x001BF690
*/
// Range: 0x1BF550 -> 0x1BF690
void voBufCreate(class VoBuf * f /* r2 */, class VoData * data /* r2 */, class VoTag * tag /* r2 */, signed int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF550 -> 0x1BF690
        signed int i; // r6
    }
}

