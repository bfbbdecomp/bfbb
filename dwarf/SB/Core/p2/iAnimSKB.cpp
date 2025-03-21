/*
    Compile unit: C:\SB\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float slerpPolynomial[24]; // size: 0x60, address: 0x416CA0
signed int CmpBoneTime(void *, void *); // size: 0x0, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
signed int CmpTime(void *, void *); // size: 0x0, address: 0x0
unsigned char * giAnimScratch; // size: 0x4, address: 0x50E80C
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class ANMHeader {
    // total size: 0x20
public:
    unsigned int chunkType; // offset 0x0, size 0x4
    unsigned int chunkLength; // offset 0x4, size 0x4
    unsigned int chunkVersion; // offset 0x8, size 0x4
    signed int hanimVersion; // offset 0xC, size 0x4
    signed int hanimTypeID; // offset 0x10, size 0x4
    unsigned int numFrames; // offset 0x14, size 0x4
    signed int flags; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class iAnimSKBHeader {
    // total size: 0x1C
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned int KeyCount; // offset 0xC, size 0x4
    float Scale[3]; // offset 0x10, size 0xC
};
class iAnimSKBKey {
    // total size: 0x10
public:
    unsigned short TimeIndex; // offset 0x0, size 0x2
    signed short Quat[4]; // offset 0x2, size 0x8
    signed short Tran[3]; // offset 0xA, size 0x6
};
class SKAKey {
    // total size: 0x24
public:
    float quat[4]; // offset 0x0, size 0x10
    float tran[3]; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    unsigned int prevFrame; // offset 0x20, size 0x4
};
class ANMKey {
    // total size: 0x24
public:
    float time; // offset 0x0, size 0x4
    float quat[4]; // offset 0x4, size 0x10
    float tran[3]; // offset 0x14, size 0xC
    unsigned int prevFrame; // offset 0x20, size 0x4
};
class SKAHeader {
    // total size: 0xC
public:
    unsigned int numFrames; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4410 -> 0x001A49C8
*/
// Range: 0x1A4410 -> 0x1A49C8
signed int _iAnimSKBExtractTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, class xVec3 * tranArray /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4410 -> 0x1A49C8
        unsigned int i; // r14
        unsigned int j; // r13
        unsigned int keylast; // r12
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r13
        float * times; // r11
        unsigned short * offsets; // r8
        class xVec3 * lastTran; // r10
        signed int tranFound; // r2
        signed int lastTime; // r9
        signed int currTime; // r8
        float lerp; // r7
    }
}

/*
    Compile unit: C:\SB\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A49D0 -> 0x001A4EA8
*/
// Range: 0x1A49D0 -> 0x1A4EA8
void _iAnimSKBAdjustTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float * starttran /* r2 */, float * endtran /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A49D0 -> 0x1A4EA8
        signed int ipos; // r16
        unsigned int i; // r14
        unsigned int idx; // r13
        unsigned int keyfirst; // r12
        unsigned int keylast; // r11
        unsigned int kcount; // r10
        unsigned int bcount; // r12
        unsigned int tcount; // r11
        float outScale[3]; // r29+0x40
        float pos; // r8
        float factor[3]; // r29+0x30
        float oldmax[3]; // r29+0x20
        float newmax[3]; // r29+0x10
        float timefirst; // r1
        float timelast; // r29+0x50
        class iAnimSKBKey * keys; // r9
        float * times; // r8
        unsigned short * offsets; // r13
    }
}

/*
    Compile unit: C:\SB\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4EB0 -> 0x001A4ED0
*/
// Range: 0x1A4EB0 -> 0x1A4ED0
float iAnimDurationSKB(class iAnimSKBHeader * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4EB0 -> 0x1A4ED0
    }
}

/*
    Compile unit: C:\SB\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4ED0 -> 0x001A5498
*/
// Range: 0x1A4ED0 -> 0x1A5498
void iAnimEvalSKB(class iAnimSKBHeader * data /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r13 */, class xQuat * quat /* r12 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4ED0 -> 0x1A5498
        unsigned int i; // r11
        unsigned int tidx; // r11
        unsigned int bcount; // r10
        unsigned int tcount; // r6
        class iAnimSKBKey * keys; // r9
        float * times; // r8
        unsigned short * offsets; // r3
        signed int asdf; // r2
        float scalex; // r29
        float scaley; // r29
        float scalez; // r29
        class iAnimSKBKey * k; // r5
        float time1; // r2
        float time2; // r29
        float lerp; // r29
        class iAnimSKBKey * k; // r6
        unsigned int costheta; // r2
        unsigned int theta; // r6
    }
}

