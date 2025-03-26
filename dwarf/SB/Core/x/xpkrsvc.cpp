/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class st_PACKER_READ_FUNCS g_pkr_read_funcmap_original; // size: 0x44, address: 0x418BE0
static class st_PACKER_READ_FUNCS g_pkr_read_funcmap; // size: 0x44, address: 0x598740
static class st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x50FA84
static class st_PACKER_READ_DATA g_readdatainst[16]; // size: 0x8F80, address: 0x598790
static unsigned int g_loadlock; // size: 0x4, address: 0x50FA88
static signed int pkr_sector_size; // size: 0x4, address: 0x50FA8C
static signed int g_packinit; // size: 0x4, address: 0x50FA90
static signed int g_memalloc_pair; // size: 0x4, address: 0x50FA94
static signed int g_memalloc_runtot; // size: 0x4, address: 0x50FA98
static signed int g_memalloc_runfree; // size: 0x4, address: 0x50FA9C
static char * g_strz_layername[11]; // size: 0x2C, address: 0x0
static class RwResEntry * g_RWarena_resEntry; // size: 0x4, address: 0x50FAA8
static class RwResEntry * g_RWarena_resOwner; // size: 0x4, address: 0x50FAAC
static signed int g_RWarena_bufsize; // size: 0x4, address: 0x0
class RwModuleInfo resourcesModule; // size: 0x8, address: 0x50FC48
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
void PKR_special_loadbuf_killed(class RwResEntry *); // size: 0x0, address: 0x1F70B0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
signed int OrdTest_R_AssetID(void *, void *); // size: 0x0, address: 0x1F85E0
signed int OrdComp_R_Asset(void *, void *); // size: 0x0, address: 0x1F8620
class st_PACKER_READ_DATA {
    // total size: 0x8F8
public:
    class st_PACKER_ASSETTYPE * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    unsigned int opts; // offset 0x8, size 0x4
    unsigned int pkgver; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    signed int subver; // offset 0x14, size 0x4
    signed int compatver; // offset 0x18, size 0x4
    class st_HIPLOADDATA * pkg; // offset 0x1C, size 0x4
    unsigned int base_sector; // offset 0x20, size 0x4
    signed int lockid; // offset 0x24, size 0x4
    char packfile[128]; // offset 0x28, size 0x80
    signed int asscnt; // offset 0xA8, size 0x4
    signed int laycnt; // offset 0xAC, size 0x4
    class st_XORDEREDARRAY asstoc; // offset 0xB0, size 0x10
    class st_XORDEREDARRAY laytoc; // offset 0xC0, size 0x10
    class st_PACKER_ATOC_NODE * pool_anode; // offset 0xD0, size 0x4
    signed int pool_nextaidx; // offset 0xD4, size 0x4
    class st_XORDEREDARRAY typelist[129]; // offset 0xD8, size 0x810
    signed long time_made; // offset 0x8E8, size 0x4
    signed long time_mod; // offset 0x8F0, size 0x4
};
class st_HIPLOADDATA {
    // total size: 0x0
};
class st_PACKER_ATOC_NODE {
    // total size: 0x60
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int asstype; // offset 0x4, size 0x4
    signed int d_off; // offset 0x8, size 0x4
    signed int d_size; // offset 0xC, size 0x4
    signed int d_pad; // offset 0x10, size 0x4
    unsigned int d_chksum; // offset 0x14, size 0x4
    signed int assalign; // offset 0x18, size 0x4
    signed int infoflag; // offset 0x1C, size 0x4
    signed int loadflag; // offset 0x20, size 0x4
    char * memloc; // offset 0x24, size 0x4
    signed int x_size; // offset 0x28, size 0x4
    signed int readcnt; // offset 0x2C, size 0x4
    signed int readrem; // offset 0x30, size 0x4
    class st_PACKER_ASSETTYPE * typeref; // offset 0x34, size 0x4
    class st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    class st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char basename[32]; // offset 0x40, size 0x20
};
class st_PACKER_LTOC_NODE {
    // total size: 0x2C
public:
    enum en_LAYER_TYPE laytyp; // offset 0x0, size 0x4
    class st_XORDEREDARRAY assref; // offset 0x4, size 0x10
    signed int flg_ldstat; // offset 0x14, size 0x4
    signed int danglecnt; // offset 0x18, size 0x4
    unsigned int chksum; // offset 0x1C, size 0x4
    signed int laysize; // offset 0x20, size 0x4
    char * laymem; // offset 0x24, size 0x4
    char * laytru; // offset 0x28, size 0x4
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
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class st_PACKER_WRITE_DATA {
    // total size: 0x250
public:
    class st_PACKER_ASSETTYPE * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    signed int lockid; // offset 0x8, size 0x4
    unsigned int pkropt; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    char packfile[256]; // offset 0x14, size 0x100
    signed int sectalign; // offset 0x114, size 0x4
    signed int dassalign; // offset 0x118, size 0x4
    class st_XORDEREDARRAY asslist; // offset 0x11C, size 0x10
    class st_XORDEREDARRAY laylist; // offset 0x12C, size 0x10
    signed int off_lg_asset; // offset 0x13C, size 0x4
    signed int off_lg_layer; // offset 0x140, size 0x4
    signed int off_lg_xform; // offset 0x144, size 0x4
    char hdrfile[256]; // offset 0x148, size 0x100
    signed int (* hdrfunc)(void *, unsigned int, char *, char *); // offset 0x248, size 0x4
    signed int (* generrf)(unsigned int, enum en_GENERATE_ERROR, char *, char *); // offset 0x24C, size 0x4
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
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
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
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
class st_HIPLOADFUNCS {
    // total size: 0x34
public:
    class st_HIPLOADDATA * (* create)(char *, char *, signed int); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(class st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(class st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(class st_HIPLOADDATA *); // offset 0x10, size 0x4
    signed int (* readBytes)(class st_HIPLOADDATA *, char *, signed int); // offset 0x14, size 0x4
    signed int (* readShorts)(class st_HIPLOADDATA *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readLongs)(class st_HIPLOADDATA *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readFloats)(class st_HIPLOADDATA *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readString)(class st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    signed int (* setBypass)(class st_HIPLOADDATA *, signed int, signed int); // offset 0x28, size 0x4
    void (* setSpot)(class st_HIPLOADDATA *, signed int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(class st_HIPLOADDATA *); // offset 0x30, size 0x4
};
enum en_GENERATE_ERROR {
    PKR_GENERR_NONE = 0,
    PKR_GENERR_PACKOPEN = 1,
    PKR_GENERR_ASSETOPEN = 2,
    PKR_GENERR_EMPTYASSET = 3,
    PKR_GENERR_WRITEFAIL = 4,
    PKR_GENERR_VIRTUAL = 5,
    PKR_GENERR_DUPEASSET = 6,
    PKR_GENERR_UNKNOWN = 7,
};
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
class RwModuleInfo {
    // total size: 0x8
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7010 -> 0x001F70B0
*/
// Range: 0x1F7010 -> 0x1F70B0
static void * PKR_specialGet_loadbuf(class st_PACKER_READ_DATA * pr /* r18 */, signed int amount /* r16 */, signed int align /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7010 -> 0x1F70B0
        void * da_mem; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F70B0 -> 0x001F70B8
*/
// Range: 0x1F70B0 -> 0x1F70B8
static void PKR_special_loadbuf_killed() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F70B0 -> 0x1F70B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F70C0 -> 0x001F7174
*/
// Range: 0x1F70C0 -> 0x1F7174
static void PKR_relmem(unsigned int id /* r19 */, signed int blksize /* r18 */, void * memptr /* r17 */, signed int isTemp /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F70C0 -> 0x1F7174
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7180 -> 0x001F7270
*/
// Range: 0x1F7180 -> 0x1F7270
static void * PKR_getmem(unsigned int id /* r18 */, signed int amount /* r17 */, signed int align /* r20 */, signed int isTemp /* r2 */, char * * memtru /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7180 -> 0x1F7270
        void * memptr; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7270 -> 0x001F7580
*/
// Range: 0x1F7270 -> 0x1F7580
static void PKR_bld_typecnt(class st_PACKER_READ_DATA * pr /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7270 -> 0x1F7580
        class st_PACKER_LTOC_NODE * laynode; // r23
        class st_PACKER_ATOC_NODE * assnode; // r5
        signed int i; // r20
        signed int j; // r19
        signed int idx; // r18
        signed int typcnt[129]; // r29+0xA0
        class st_XORDEREDARRAY * tmplist; // r2
        unsigned int lasttype; // r17
        signed int lasttidx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7580 -> 0x001F75EC
*/
// Range: 0x1F7580 -> 0x1F75EC
static class st_PACKER_ASSETTYPE * PKR_type2typeref(unsigned int type /* r2 */, class st_PACKER_ASSETTYPE * typelist /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7580 -> 0x1F75EC
        class st_PACKER_ASSETTYPE * da_type; // r16
        class st_PACKER_ASSETTYPE * tmptype; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F75F0 -> 0x001F769C
*/
// Range: 0x1F75F0 -> 0x1F769C
static signed int LOD_r_STRM(class st_HIPLOADDATA * pkg /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F75F0 -> 0x1F769C
        unsigned int cid; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F76A0 -> 0x001F78EC
*/
// Range: 0x1F76A0 -> 0x1F78EC
static signed int LOD_r_LHDR(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F76A0 -> 0x1F78EC
        unsigned int cid; // r2
        signed int ival; // r29+0x6C
        enum en_LAYER_TYPE laytyp; // r20
        signed int refcnt; // r29+0x68
        signed int idx; // r2
        signed int i; // r20
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_PACKER_ATOC_NODE * assnode; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F78F0 -> 0x001F79C0
*/
// Range: 0x1F78F0 -> 0x1F79C0
static signed int LOD_r_LTOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F78F0 -> 0x1F79C0
        unsigned int cid; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F79C0 -> 0x001F7AB4
*/
// Range: 0x1F79C0 -> 0x1F7AB4
static signed int LOD_r_ADBG(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */, class st_PACKER_ATOC_NODE * assnode /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F79C0 -> 0x1F7AB4
        signed int ival; // r29+0x14C
        char tmpbuf[256]; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7AC0 -> 0x001F7CE0
*/
// Range: 0x1F7AC0 -> 0x1F7CE0
static signed int LOD_r_AHDR(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7AC0 -> 0x1F7CE0
        unsigned int cid; // r2
        signed int ival; // r29+0x5C
        signed int isdup; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7CE0 -> 0x001F7DB0
*/
// Range: 0x1F7CE0 -> 0x1F7DB0
static signed int LOD_r_ATOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7CE0 -> 0x1F7DB0
        unsigned int cid; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7DB0 -> 0x001F7E80
*/
// Range: 0x1F7DB0 -> 0x1F7E80
static signed int LOD_r_DICT(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7DB0 -> 0x1F7E80
        unsigned int cid; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7E80 -> 0x001F7FFC
*/
// Range: 0x1F7E80 -> 0x1F7FFC
static signed int LOD_r_PLAT(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F7E80 -> 0x1F7FFC
        signed int result; // r16
        signed int plattag; // r29+0xCC
        char platname[32]; // r29+0xA0
        char vidname[32]; // r29+0x80
        char langname[32]; // r29+0x60
        char titlename[32]; // r29+0x40
        signed int n; // r2
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8000 -> 0x001F82B4
*/
// Range: 0x1F8000 -> 0x1F82B4
static signed int ValidatePlatform(char * plat /* r19 */, char * vid /* r18 */, char * lang /* r17 */, char * title /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8000 -> 0x1F82B4
        char fullname[128]; // r29+0x50
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F82C0 -> 0x001F8378
*/
// Range: 0x1F82C0 -> 0x1F8378
static signed int LOD_r_PVER(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F82C0 -> 0x1F8378
        signed int ver; // r29+0x3C
        signed int amt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8380 -> 0x001F85D8
*/
// Range: 0x1F8380 -> 0x1F85D8
static signed int LOD_r_PACK(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8380 -> 0x1F85D8
        unsigned int cid; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F85E0 -> 0x001F8620
*/
// Range: 0x1F85E0 -> 0x1F8620
static signed int OrdTest_R_AssetID(void * vkey /* r2 */, void * vitem /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F85E0 -> 0x1F8620
        signed int rc; // r2
        unsigned int key; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8620 -> 0x001F8668
*/
// Range: 0x1F8620 -> 0x1F8668
static signed int OrdComp_R_Asset(void * vkey /* r2 */, void * vitem /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8620 -> 0x1F8668
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8670 -> 0x001F8838
*/
// Range: 0x1F8670 -> 0x1F8838
static signed int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r18 */, class st_PACKER_READ_DATA * skippr /* r17 */, signed int oursize /* r23 */, unsigned int ourtype /* r16 */, unsigned int chksum /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8670 -> 0x1F8838
        signed int is_dup; // r22
        class st_PACKER_ATOC_NODE * tmp_ass; // r21
        signed int i; // r20
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8840 -> 0x001F88C8
*/
// Range: 0x1F8840 -> 0x1F88C8
static signed int PKR_PkgHasAsset(class st_PACKER_READ_DATA * pr /* r16 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8840 -> 0x1F88C8
        signed int rc; // r2
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F88D0 -> 0x001F8A1C
*/
// Range: 0x1F88D0 -> 0x1F8A1C
static signed int PKR_GetAssetInfoByType(class st_PACKER_READ_DATA * pr /* r19 */, unsigned int type /* r18 */, signed int idx /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F88D0 -> 0x1F8A1C
        class st_PACKER_ATOC_NODE * assnode; // r6
        class st_XORDEREDARRAY * typlist; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8A20 -> 0x001F8AF8
*/
// Range: 0x1F8A20 -> 0x1F8AF8
static signed int PKR_GetAssetInfo(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8A20 -> 0x1F8AF8
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8B00 -> 0x001F8B08
*/
// Range: 0x1F8B00 -> 0x1F8B08
static unsigned int PKR_GetBaseSector(class st_PACKER_READ_DATA * pr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8B00 -> 0x1F8B08
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8B10 -> 0x001F8B7C
*/
// Range: 0x1F8B10 -> 0x1F8B7C
static char * PKR_AssetName(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8B10 -> 0x1F8B7C
        char * da_name; // r16
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8B80 -> 0x001F8B88
*/
// Range: 0x1F8B80 -> 0x1F8B88
unsigned int PKRAssetIDFromInst(void * asset_inst /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8B80 -> 0x1F8B88
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8B90 -> 0x001F8BD0
*/
// Range: 0x1F8B90 -> 0x1F8BD0
static void PKR_Disconnect(class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8B90 -> 0x1F8BD0
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8BD0 -> 0x001F8BD8
*/
// Range: 0x1F8BD0 -> 0x1F8BD8
static unsigned int PKR_getPackTimestamp(class st_PACKER_READ_DATA * pr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8BD0 -> 0x1F8BD8
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8BE0 -> 0x001F8C58
*/
// Range: 0x1F8BE0 -> 0x1F8C58
static signed int PKR_IsAssetReady(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8BE0 -> 0x1F8C58
        signed int is_ok; // r16
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8C60 -> 0x001F8D20
*/
// Range: 0x1F8C60 -> 0x1F8D20
static void * PKR_AssetByType(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */, signed int idx /* r2 */, unsigned int * size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8C60 -> 0x1F8D20
        class st_XORDEREDARRAY * typlist; // r4
        class st_PACKER_ATOC_NODE * assnode; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8D20 -> 0x001F8D88
*/
// Range: 0x1F8D20 -> 0x1F8D88
static signed int PKR_AssetCount(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8D20 -> 0x1F8D88
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8D90 -> 0x001F8E14
*/
// Range: 0x1F8D90 -> 0x1F8E14
static unsigned int PKR_GetAssetSize(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8D90 -> 0x1F8E14
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8E20 -> 0x001F8E28
*/
// Range: 0x1F8E20 -> 0x1F8E28
static void * PKR_LoadAsset(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8E20 -> 0x1F8E28
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8E30 -> 0x001F8E38
*/
// Range: 0x1F8E30 -> 0x1F8E38
static signed int PKR_LoadLayer() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8E30 -> 0x1F8E38
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8E40 -> 0x001F8EAC
*/
// Range: 0x1F8E40 -> 0x1F8EAC
static void * PKR_FindAsset(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8E40 -> 0x1F8EAC
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8EB0 -> 0x001F8FD8
*/
// Range: 0x1F8EB0 -> 0x1F8FD8
static void PKR_xform_asset(class st_PACKER_ATOC_NODE * assnode /* r17 */, signed int dumpable_layer /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8EB0 -> 0x1F8FD8
        char * xformloc; // r2
        class st_PACKER_ASSETTYPE * atype; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8FE0 -> 0x001F90F8
*/
// Range: 0x1F8FE0 -> 0x1F90F8
static void PKR_xformLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F8FE0 -> 0x1F90F8
        signed int i; // r19
        signed int will_be_dumped; // r18
        class st_PACKER_ATOC_NODE * tmpass; // r17
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9100 -> 0x001F91E8
*/
// Range: 0x1F9100 -> 0x1F91E8
static void PKR_updateLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9100 -> 0x1F91E8
        signed int i; // r8
        class st_PACKER_ATOC_NODE * tmpass; // r7
        signed int lay_hip_pos; // r12
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F91F0 -> 0x001F9300
*/
// Range: 0x1F91F0 -> 0x1F9300
static signed int PKR_findNextLayerToLoad(class st_PACKER_READ_DATA * * work_on_pkg /* r2 */, class st_PACKER_LTOC_NODE * * next_layer /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F91F0 -> 0x1F9300
        class st_PACKER_READ_DATA * tmppr; // r10
        class st_PACKER_LTOC_NODE * tmplay; // r9
        signed int i; // r8
        signed int j; // r11
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9300 -> 0x001F9420
*/
// Range: 0x1F9300 -> 0x1F9420
static void PKR_LayerMemRelease(class st_PACKER_LTOC_NODE * layer /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9300 -> 0x1F9420
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9420 -> 0x001F9544
*/
// Range: 0x1F9420 -> 0x1F9544
static char * PKR_LayerMemReserve(class st_PACKER_READ_DATA * pr /* r2 */, class st_PACKER_LTOC_NODE * layer /* r6 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9420 -> 0x1F9544
        char * mem; // r5
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9550 -> 0x001F9988
*/
// Range: 0x1F9550 -> 0x1F9988
static signed int PKR_LoadStep_Async() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9550 -> 0x1F9988
        signed int moretodo; // r2
        signed int rc; // r2
        enum en_READ_ASYNC_STATUS readstat; // r2
        class st_PACKER_ATOC_NODE * tmpass; // r16
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r3
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
        class st_PACKER_READ_DATA * curpr; // @ 0x0050FAA0
        class st_PACKER_LTOC_NODE * asynlay; // @ 0x0050FAA4
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9990 -> 0x001F9B38
*/
// Range: 0x1F9990 -> 0x1F9B38
static signed int PKR_parse_TOC(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9990 -> 0x1F9B38
        signed int is_ok; // r17
        unsigned int cid; // r2
        signed int done; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9B40 -> 0x001F9CB4
*/
// Range: 0x1F9B40 -> 0x1F9CB4
static signed int PKR_SetActive(class st_PACKER_READ_DATA * pr /* r22 */, enum en_LAYER_TYPE layer /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9B40 -> 0x1F9CB4
        signed int result; // r23
        signed int rc; // r2
        signed int i; // r20
        signed int j; // r19
        class st_PACKER_ATOC_NODE * assnode; // r18
        class st_PACKER_LTOC_NODE * laynode; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9CC0 -> 0x001F9F44
*/
// Range: 0x1F9CC0 -> 0x1F9F44
static void PKR_ReadDone(class st_PACKER_READ_DATA * pr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9CC0 -> 0x1F9F44
        signed int i; // r21
        signed int j; // r20
        signed int lockid; // r17
        class st_PACKER_ATOC_NODE * assnode; // r5
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_XORDEREDARRAY * tmplist; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9F50 -> 0x001FA170
*/
// Range: 0x1F9F50 -> 0x1FA170
static class st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r21 */, char * pkgfile /* r20 */, unsigned int opts /* r22 */, signed int * cltver /* r19 */, class st_PACKER_ASSETTYPE * typelist /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F9F50 -> 0x1FA170
        class st_PACKER_READ_DATA * pr; // r18
        signed int i; // r6
        signed int uselock; // r17
        char * tocbuf_RAW; // r29+0x9C
        char * tocbuf_aligned; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA170 -> 0x001FA178
*/
// Range: 0x1FA170 -> 0x1FA178
signed int PKRLoadStep() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA170 -> 0x1FA178
        signed int more_todo; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA180 -> 0x001FA194
*/
// Range: 0x1FA180 -> 0x1FA194
signed int PKRShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA180 -> 0x1FA194
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA1A0 -> 0x001FA2E8
*/
// Range: 0x1FA1A0 -> 0x1FA2E8
signed int PKRStartup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA1A0 -> 0x1FA2E8
    }
}

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA2F0 -> 0x001FA328
*/
// Range: 0x1FA2F0 -> 0x1FA328
class st_PACKER_READ_FUNCS * PKRGetReadFuncs(signed int apiver /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA2F0 -> 0x1FA328
    }
}

