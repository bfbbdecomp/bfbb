/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
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
class xMovePoint : public xBase {
    // total size: 0x30
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[2]; // offset 0x25, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
};
class xMovePointAsset : public xBaseAsset {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
class xEnt {
    // total size: 0x0
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xEnv {
    // total size: 0x0
};
class xSerial {
    // total size: 0x0
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
class xSpline3 {
    // total size: 0x2C
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class xScene {
    // total size: 0x70
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_ents; // offset 0x6, size 0x2
    unsigned short num_trigs; // offset 0x8, size 0x2
    unsigned short num_stats; // offset 0xA, size 0x2
    unsigned short num_dyns; // offset 0xC, size 0x2
    unsigned short num_npcs; // offset 0xE, size 0x2
    unsigned short num_act_ents; // offset 0x10, size 0x2
    unsigned short num_nact_ents; // offset 0x12, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short num_ents_allocd; // offset 0x20, size 0x2
    unsigned short num_trigs_allocd; // offset 0x22, size 0x2
    unsigned short num_stats_allocd; // offset 0x24, size 0x2
    unsigned short num_dyns_allocd; // offset 0x26, size 0x2
    unsigned short num_npcs_allocd; // offset 0x28, size 0x2
    class xEnt * * trigs; // offset 0x2C, size 0x4
    class xEnt * * stats; // offset 0x30, size 0x4
    class xEnt * * dyns; // offset 0x34, size 0x4
    class xEnt * * npcs; // offset 0x38, size 0x4
    class xEnt * * act_ents; // offset 0x3C, size 0x4
    class xEnt * * nact_ents; // offset 0x40, size 0x4
    class xEnv * env; // offset 0x44, size 0x4
    class xMemPool mempool; // offset 0x48, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
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

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2870 -> 0x001F2878
*/
// Range: 0x1F2870 -> 0x1F2878
class xVec3 * xMovePointGetPos(class xMovePoint * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2870 -> 0x1F2878
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2880 -> 0x001F2AB0
*/
// Range: 0x1F2880 -> 0x1F2AB0
float xMovePointGetNext(class xMovePoint * m /* r20 */, class xMovePoint * prev /* r19 */, class xMovePoint * * next /* r18 */, class xVec3 * hdng /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2880 -> 0x1F2AB0
        signed int rnd; // r6
        unsigned short idx; // r5
        class xMovePoint * previousOption; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2AB0 -> 0x001F2AC8
*/
// Range: 0x1F2AB0 -> 0x1F2AC8
void xMovePointSplineDestroy(class xMovePoint * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2AB0 -> 0x1F2AC8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2AD0 -> 0x001F2CB8
*/
// Range: 0x1F2AD0 -> 0x1F2CB8
void xMovePointSplineSetup(class xMovePoint * m /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2AD0 -> 0x1F2CB8
        class xMovePoint * w0; // r7
        class xMovePoint * w2; // r2
        class xMovePoint * w3; // r3
        class xVec3 points[2]; // r29+0x20
        class xVec3 p1; // r29+0x50
        class xVec3 p2; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2CC0 -> 0x001F2D90
*/
// Range: 0x1F2CC0 -> 0x1F2D90
void xMovePointSetup(class xMovePoint * m /* r20 */, class xScene * sc /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2CC0 -> 0x1F2D90
        unsigned int * id; // r18
        unsigned short idx; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2D90 -> 0x001F2DD0
*/
// Range: 0x1F2D90 -> 0x1F2DD0
void xMovePointReset(class xMovePoint * m /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2D90 -> 0x1F2DD0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2DD0 -> 0x001F2DD8
*/
// Range: 0x1F2DD0 -> 0x1F2DD8
void xMovePointLoad(class xMovePoint * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2DD0 -> 0x1F2DD8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2DE0 -> 0x001F2DE8
*/
// Range: 0x1F2DE0 -> 0x1F2DE8
void xMovePointSave(class xMovePoint * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2DE0 -> 0x1F2DE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMovePoint.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2DF0 -> 0x001F2E74
*/
// Range: 0x1F2DF0 -> 0x1F2E74
void xMovePointInit(class xMovePoint * m /* r17 */, class xMovePointAsset * asset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F2DF0 -> 0x1F2E74
    }
}

