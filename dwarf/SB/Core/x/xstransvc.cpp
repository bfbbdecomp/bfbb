/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int g_straninit; // size: 0x4, address: 0x50FB68
static class st_STRAN_DATA g_xstdata; // size: 0x1144, address: 0x5B97A0
static class st_PACKER_READ_FUNCS * g_pkrf; // size: 0x4, address: 0x50FB6C
static class st_PACKER_ASSETTYPE * g_typeHandlers; // size: 0x4, address: 0x50FB70
class st_STRAN_SCENE {
    // total size: 0x114
public:
    unsigned int scnid; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    class st_PACKER_READ_DATA * spkg; // offset 0x8, size 0x4
    signed int isHOP; // offset 0xC, size 0x4
    void * userdata; // offset 0x10, size 0x4
    char fnam[256]; // offset 0x14, size 0x100
};
class st_PACKER_READ_DATA {
    // total size: 0x0
};
class st_PACKER_ASSETTYPE {
    // total size: 0x28
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
class st_STRAN_DATA {
    // total size: 0x1144
public:
    class st_STRAN_SCENE hipscn[16]; // offset 0x0, size 0x1140
    unsigned int loadlock; // offset 0x1140, size 0x4
};
class st_PKR_ASSET_TOCINFO {
    // total size: 0x18
public:
    unsigned int aid; // offset 0x0, size 0x4
    class st_PACKER_ASSETTYPE * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
class st_PACKER_READ_FUNCS {
    // total size: 0x44
public:
    unsigned int api_ver; // offset 0x0, size 0x4
    class st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, signed int *, class st_PACKER_ASSETTYPE *); // offset 0x4, size 0x4
    void (* Done)(class st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    signed int (* LoadLayer)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(class st_PACKER_READ_DATA *, unsigned int, char *, void *); // offset 0x14, size 0x4
    void * (* AssetByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, unsigned int *); // offset 0x18, size 0x4
    signed int (* AssetCount)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    signed int (* IsAssetReady)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    signed int (* SetActive)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(class st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    signed int (* GetAssetInfo)(class st_PACKER_READ_DATA *, unsigned int, class st_PKR_ASSET_TOCINFO *); // offset 0x30, size 0x4
    signed int (* GetAssetInfoByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, class st_PKR_ASSET_TOCINFO *); // offset 0x34, size 0x4
    signed int (* PkgHasAsset)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(class st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(class st_PACKER_READ_DATA *); // offset 0x40, size 0x4
};
enum en_LAYER_TYPE {
    PKR_LTYPE_ALL = -1,
    PKR_LTYPE_DEFAULT = 0,
    PKR_LTYPE_TEXTURE = 1,
    PKR_LTYPE_BSP = 2,
    PKR_LTYPE_MODEL = 3,
    PKR_LTYPE_ANIMATION = 4,
    PKR_LTYPE_VRAM = 5,
    PKR_LTYPE_SRAM = 6,
    PKR_LTYPE_SNDTOC = 7,
    PKR_LTYPE_CUTSCENE = 8,
    PKR_LTYPE_CUTSCENETOC = 9,
    PKR_LTYPE_JSPINFO = 10,
    PKR_LTYPE_NOMORE = 11,
};

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C750 -> 0x0020C7D8
*/
// Range: 0x20C750 -> 0x20C7D8
static class st_STRAN_SCENE * XST_find_bySID(unsigned int sid /* r2 */, signed int findTheHOP /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C750 -> 0x20C7D8
        class st_STRAN_SCENE * da_sdata; // r2
        signed int i; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C7E0 -> 0x0020C898
*/
// Range: 0x20C7E0 -> 0x20C898
static class st_STRAN_SCENE * XST_lock_next() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C7E0 -> 0x20C898
        class st_STRAN_SCENE * sdata; // r17
        signed int i; // r16
        signed int uselock; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C8A0 -> 0x0020C9E8
*/
// Range: 0x20C8A0 -> 0x20C9E8
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r21 */, unsigned int * sceneID /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C8A0 -> 0x20C9E8
        char * da_hipname; // r19
        signed int rc; // r2
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C9F0 -> 0x0020C9F8
*/
// Range: 0x20C9F0 -> 0x20C9F8
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C9F0 -> 0x20C9F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CA00 -> 0x0020CC04
*/
// Range: 0x20CA00 -> 0x20CC04
signed int xSTGetAssetInfoByType(unsigned int type /* r20 */, signed int idx /* r19 */, class st_PKR_ASSET_TOCINFO * ainfo /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20CA00 -> 0x20CC04
        signed int found; // r23
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0xA0
        signed int rc; // r2
        signed int i; // r18
        signed int sum; // r17
        signed int cnt; // r22
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CC10 -> 0x0020CDA8
*/
// Range: 0x20CC10 -> 0x20CDA8
signed int xSTGetAssetInfo(unsigned int aid /* r17 */, class st_PKR_ASSET_TOCINFO * tocainfo /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20CC10 -> 0x20CDA8
        signed int found; // r21
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0x70
        signed int rc; // r2
        signed int scncnt; // r20
        signed int i; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CDB0 -> 0x0020CF38
*/
// Range: 0x20CDB0 -> 0x20CF38
void * xSTFindAssetByType(unsigned int type /* r17 */, signed int idx /* r16 */, unsigned int * size /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20CDB0 -> 0x20CF38
        void * memptr; // r22
        signed int scncnt; // r21
        signed int i; // r20
        signed int sum; // r19
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CF40 -> 0x0020D060
*/
// Range: 0x20CF40 -> 0x20D060
signed int xSTAssetCountByType(unsigned int type /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20CF40 -> 0x20D060
        signed int sum; // r18
        signed int cnt; // r2
        signed int scncnt; // r17
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D060 -> 0x0020D21C
*/
// Range: 0x20D060 -> 0x20D21C
void * xSTFindAsset(unsigned int aid /* r21 */, unsigned int * size /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D060 -> 0x20D21C
        void * memloc; // r19
        signed int ready; // r2
        signed int scncnt; // r18
        signed int i; // r17
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D220 -> 0x0020D34C
*/
// Range: 0x20D220 -> 0x20D34C
char * xSTAssetName(void * raw_HIP_asset /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D220 -> 0x20D34C
        char * aname; // r2
        unsigned int aid; // r2
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D350 -> 0x0020D470
*/
// Range: 0x20D350 -> 0x20D470
char * xSTAssetName(unsigned int aid /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D350 -> 0x20D470
        char * aname; // r2
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D470 -> 0x0020D538
*/
// Range: 0x20D470 -> 0x20D538
signed int xSTSwitchScene(unsigned int sid /* r19 */, void * userdata /* r18 */, signed int (* progmon)(void *, float) /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D470 -> 0x20D538
        class st_STRAN_SCENE * sdata; // r21
        signed int rc; // r20
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D540 -> 0x0020D584
*/
// Range: 0x20D540 -> 0x20D584
void xSTDisconnect(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D540 -> 0x20D584
        class st_STRAN_SCENE * sdata; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D590 -> 0x0020D5E0
*/
// Range: 0x20D590 -> 0x20D5E0
float xSTLoadStep() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D590 -> 0x20D5E0
        float pct; // r20
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D5E0 -> 0x0020D808
*/
// Range: 0x20D5E0 -> 0x20D808
void xSTUnLoadScene(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D5E0 -> 0x20D808
        class st_STRAN_SCENE * sdata; // r16
        signed int cnt; // r18
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D810 -> 0x0020D874
*/
// Range: 0x20D810 -> 0x20D874
signed int xSTQueueSceneAssets(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D810 -> 0x20D874
        signed int result; // r16
        class st_STRAN_SCENE * sdata; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D880 -> 0x0020DC6C
*/
// Range: 0x20D880 -> 0x20DC6C
signed int xSTPreLoadScene(unsigned int sid /* r20 */, void * userdata /* r21 */, signed int flg_hiphop /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20D880 -> 0x20DC6C
        signed int result; // r2
        class st_STRAN_SCENE * sdata; // r16
        signed int cltver; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DC70 -> 0x0020DD38
*/
// Range: 0x20DC70 -> 0x20DD38
signed int xSTShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20DC70 -> 0x20DD38
    }
}

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DD40 -> 0x0020DD98
*/
// Range: 0x20DD40 -> 0x20DD98
signed int xSTStartup(class st_PACKER_ASSETTYPE * handlers /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20DD40 -> 0x20DD98
    }
}

