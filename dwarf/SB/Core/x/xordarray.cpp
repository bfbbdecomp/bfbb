/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2E80 -> 0x001F2FF0
*/
// Range: 0x1F2E80 -> 0x1F2FF0
void XOrdSort(class st_XORDEREDARRAY * array /* r2 */, signed int (* test)(void *, void *) /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2E80 -> 0x1F2FF0
        void * * list; // r21
        signed int num; // r23
        signed int i; // r20
        signed int j; // r19
        signed int h; // r18
        void * v; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2FF0 -> 0x001F30C4
*/
// Range: 0x1F2FF0 -> 0x1F30C4
signed int XOrdLookup(class st_XORDEREDARRAY * array /* r22 */, void * key /* r21 */, signed int (* test)(void *, void *) /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2FF0 -> 0x1F30C4
        signed int da_idx; // r19
        signed int k0; // r18
        signed int k1; // r17
        signed int k; // r16
        signed int v; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F30D0 -> 0x001F31E0
*/
// Range: 0x1F30D0 -> 0x1F31E0
void * XOrdRemove(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */, signed int index /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F30D0 -> 0x1F31E0
        signed int i; // r8
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F31E0 -> 0x001F32A8
*/
// Range: 0x1F31E0 -> 0x1F32A8
void XOrdInsert(class st_XORDEREDARRAY * array /* r20 */, void * elt /* r19 */, signed int (* compare)(void *, void *) /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F31E0 -> 0x1F32A8
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F32B0 -> 0x001F32E0
*/
// Range: 0x1F32B0 -> 0x1F32E0
void XOrdAppend(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F32B0 -> 0x1F32E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F32E0 -> 0x001F3328
*/
// Range: 0x1F32E0 -> 0x1F3328
void XOrdDone(class st_XORDEREDARRAY * array /* r16 */, signed int wasTempAlloc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F32E0 -> 0x1F3328
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3330 -> 0x001F3338
*/
// Range: 0x1F3330 -> 0x1F3338
void XOrdReset(class st_XORDEREDARRAY * array /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3330 -> 0x1F3338
    }
}

/*
    Compile unit: C:\SB\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3340 -> 0x001F33FC
*/
// Range: 0x1F3340 -> 0x1F33FC
void XOrdInit(class st_XORDEREDARRAY * array /* r16 */, signed int size /* r2 */, signed int tempAlloc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3340 -> 0x1F33FC
    }
}

