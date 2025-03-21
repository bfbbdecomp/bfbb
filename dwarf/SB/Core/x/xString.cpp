/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DDA0 -> 0x0020E410
*/
// Range: 0x20DDA0 -> 0x20E410
char * find_char(class substr & s /* r2 */, class substr & cs /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20DDA0 -> 0x20E410
        char * p; // r2
        char * d; // r3
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r7
        char * s; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E410 -> 0x0020E4D8
*/
// Range: 0x20E410 -> 0x20E4D8
unsigned int atox(class substr & s /* r2 */, unsigned int & read_size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E410 -> 0x20E4D8
        char * p; // r7
        unsigned int size; // r6
        unsigned int total; // r2
        unsigned int v; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E4E0 -> 0x0020E5A0
*/
// Range: 0x20E4E0 -> 0x20E5A0
signed int icompare(class substr & s1 /* r2 */, class substr & s2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E4E0 -> 0x20E5A0
        unsigned int len; // r11
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E5A0 -> 0x0020E608
*/
// Range: 0x20E5A0 -> 0x20E608
signed int imemcmp(void * d1 /* r2 */, void * d2 /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E5A0 -> 0x20E608
        char * s1; // r2
        char * s2; // r2
        unsigned int i; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E610 -> 0x0020E81C
*/
// Range: 0x20E610 -> 0x20E81C
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E610 -> 0x20E81C
        char * str; // r20
        signed int index; // r19
        signed int digits; // r6
        signed int negate; // r18
        char * numstart; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E820 -> 0x0020E878
*/
// Range: 0x20E820 -> 0x20E878
char * xStrupr(char * string /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E820 -> 0x20E878
        char * p; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E880 -> 0x0020E980
*/
// Range: 0x20E880 -> 0x20E980
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E880 -> 0x20E980
        signed int result; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E980 -> 0x0020EAD0
*/
// Range: 0x20E980 -> 0x20EAD0
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20E980 -> 0x20EAD0
        char * * nextoken; // r2
        char * dest; // r7
        unsigned char * str; // r3
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EAD0 -> 0x0020EC10
*/
// Range: 0x20EAD0 -> 0x20EC10
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EAD0 -> 0x20EC10
        unsigned char * str; // r7
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EC10 -> 0x0020EC68
*/
// Range: 0x20EC10 -> 0x20EC68
unsigned int xStrHashCat(unsigned int prefix /* r2 */, char * str /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EC10 -> 0x20EC68
        unsigned int i; // r2
        char c; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EC70 -> 0x0020ECD8
*/
// Range: 0x20EC70 -> 0x20ECD8
unsigned int xStrHash(char * s /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EC70 -> 0x20ECD8
        unsigned int value; // r2
        unsigned int i; // r8
        char c; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ECE0 -> 0x0020ED38
*/
// Range: 0x20ECE0 -> 0x20ED38
unsigned int xStrHash(char * str /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ECE0 -> 0x20ED38
        unsigned int i; // r2
        char c; // r6
    }
}

