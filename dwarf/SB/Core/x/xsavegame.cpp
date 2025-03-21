/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xsginit; // size: 0x4, address: 0x50FAB0
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x5A1750
static class st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x5A3840
static class st_XSG_SHORTLABEL g_msglabels[32]; // size: 0x100, address: 0x0
static class XSGAutoData g_autodata; // size: 0x14, address: 0x5A3990
void ASG_ISG_changed(void *, enum en_CHGCODE); // size: 0x0, address: 0x1FAC30
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1FBEF0
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1FBFE0
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1FBE40
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x1FB2D0
class st_XSAVEGAME_CLIENT {
    // total size: 0x40
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int (* cltinfo)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // offset 0x4, size 0x4
    signed int (* cltproc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // offset 0x8, size 0x4
    signed int (* cltload)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // offset 0xC, size 0x4
    void * cltdata; // offset 0x10, size 0x4
    signed int needamt; // offset 0x14, size 0x4
    signed int maxamt; // offset 0x18, size 0x4
    signed int realamt; // offset 0x1C, size 0x4
    char * buf_sizepos; // offset 0x20, size 0x4
    char * buf_maxpos; // offset 0x24, size 0x4
    signed int blokact; // offset 0x28, size 0x4
    signed int blokmax; // offset 0x2C, size 0x4
    char * blokpos; // offset 0x30, size 0x4
    char * readpos; // offset 0x34, size 0x4
    signed int readamt; // offset 0x38, size 0x4
    signed int readremain; // offset 0x3C, size 0x4
};
class XSGAutoData {
    // total size: 0x14
public:
    signed int flg_autodata; // offset 0x0, size 0x4
    signed int lastTarg; // offset 0x4, size 0x4
    signed int lastGame; // offset 0x8, size 0x4
    signed int lastPhysicalSlot; // offset 0xC, size 0x4
    class st_ISGSESSION * isg_monitor; // offset 0x10, size 0x4
};
class st_XSAVEGAME_DATA {
    // total size: 0x20F0
public:
    signed int gfile_idx; // offset 0x0, size 0x4
    enum en_SAVEGAME_MODE mode; // offset 0x4, size 0x4
    unsigned int stage; // offset 0x8, size 0x4
    signed int gslot; // offset 0xC, size 0x4
    char label[64]; // offset 0x10, size 0x40
    signed int progress; // offset 0x50, size 0x4
    signed int thumbIconIdx; // offset 0x54, size 0x4
    signed long playtime; // offset 0x58, size 0x4
    char * membuf; // offset 0x60, size 0x4
    signed int memsize; // offset 0x64, size 0x4
    char * buf_curpos; // offset 0x68, size 0x4
    char * buf_sizespot; // offset 0x6C, size 0x4
    char * buf_cksmspot; // offset 0x70, size 0x4
    signed int totamt; // offset 0x74, size 0x4
    unsigned int chksum; // offset 0x78, size 0x4
    unsigned int upd_tally; // offset 0x7C, size 0x4
    signed int cltneed; // offset 0x80, size 0x4
    signed int cltmax; // offset 0x84, size 0x4
    signed int chdrneed; // offset 0x88, size 0x4
    signed int stkcnt; // offset 0x8C, size 0x4
    class st_XSAVEGAME_CLIENT cltstk[128]; // offset 0x90, size 0x2000
    class st_XSAVEGAME_CLIENT dfltloadclt; // offset 0x2090, size 0x40
    unsigned int file_chksum; // offset 0x20D0, size 0x4
    unsigned int read_chksum; // offset 0x20D4, size 0x4
    signed int readsize; // offset 0x20D8, size 0x4
    char * loadbuf; // offset 0x20DC, size 0x4
    signed int loadsize; // offset 0x20E0, size 0x4
    char * walkpos; // offset 0x20E4, size 0x4
    signed int walkremain; // offset 0x20E8, size 0x4
    class st_ISGSESSION * isgsess; // offset 0x20EC, size 0x4
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
class st_XSAVEGAME_READCONTEXT {
    // total size: 0x0
};
enum en_XSGASYNC_STATUS {
    XSG_ASTAT_NOOP = 0,
    XSG_ASTAT_INPROG = 1,
    XSG_ASTAT_SUCCESS = 2,
    XSG_ASTAT_FAILED = 3,
};
enum en_ASYNC_OPSTAT {
    ISG_OPSTAT_FAILURE = -1,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS = 1,
};
class st_XSAVEGAME_WRITECONTEXT {
    // total size: 0x0
};
class st_ISGSESSION {
    // total size: 0x0
};
enum en_ASYNC_OPERR {
    ISG_OPERR_NONE = 0,
    ISG_OPERR_NOOPER = 1,
    ISG_OPERR_MULTIOPER = 2,
    ISG_OPERR_INITFAIL = 3,
    ISG_OPERR_GAMEDIR = 4,
    ISG_OPERR_NOCARD = 5,
    ISG_OPERR_NOROOM = 6,
    ISG_OPERR_DAMAGE = 7,
    ISG_OPERR_CORRUPT = 8,
    ISG_OPERR_OTHER = 9,
    ISG_OPERR_SVNOSPACE = 10,
    ISG_OPERR_SVINIT = 11,
    ISG_OPERR_SVWRITE = 12,
    ISG_OPERR_SVOPEN = 13,
    ISG_OPERR_LDINIT = 14,
    ISG_OPERR_LDREAD = 15,
    ISG_OPERR_LDOPEN = 16,
    ISG_OPERR_TGTERR = 17,
    ISG_OPERR_TGTREM = 18,
    ISG_OPERR_TGTPREP = 19,
    ISG_OPERR_UNKNOWN = 20,
    ISG_OPERR_NOMORE = 21,
};
enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
};
class st_XSAVEGAME_LEADER {
    // total size: 0x58
public:
    char gameLabel[64]; // offset 0x0, size 0x40
    signed int progress; // offset 0x40, size 0x4
    signed long gametime; // offset 0x48, size 0x4
    char thumbIconIdx; // offset 0x50, size 0x1
};
enum en_XSG_WHYFAIL {
    XSG_WHYERR_NONE = 0,
    XSG_WHYERR_NOCARD = 1,
    XSG_WHYERR_NOROOM = 2,
    XSG_WHYERR_DAMAGE = 3,
    XSG_WHYERR_CARDYANKED = 4,
    XSG_WHYERR_OTHER = 5,
    XSG_WHYERR_NOMORE = 6,
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
class st_XSG_SHORTLABEL {
    // total size: 0x8
public:
    char * msglong; // offset 0x0, size 0x4
    char * msgshort; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAC30 -> 0x001FAC88
*/
// Range: 0x1FAC30 -> 0x1FAC88
static void ASG_ISG_changed(enum en_CHGCODE what /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAC30 -> 0x1FAC88
        class XSGAutoData * asg; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAC90 -> 0x001FACDC
*/
// Range: 0x1FAC90 -> 0x1FACDC
void Discard(class XSGAutoData * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAC90 -> 0x1FACDC
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FACE0 -> 0x001FADA4
*/
// Range: 0x1FACE0 -> 0x1FADA4
signed int SetCache(class XSGAutoData * this /* r16 */, signed int targ /* r19 */, signed int game /* r18 */, signed int physicalSlot /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FACE0 -> 0x1FADA4
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FADB0 -> 0x001FAE08
*/
// Range: 0x1FADB0 -> 0x1FAE08
signed int IsValid(class XSGAutoData * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FADB0 -> 0x1FAE08
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAE10 -> 0x001FAE1C
*/
// Range: 0x1FAE10 -> 0x1FAE1C
class XSGAutoData * xSGAutoSave_GetCache() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAE10 -> 0x1FAE1C
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAE20 -> 0x001FAF14
*/
// Range: 0x1FAE20 -> 0x1FAF14
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAE20 -> 0x1FAF14
        signed int result; // r19
        signed int rc; // r2
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAF20 -> 0x001FB1E4
*/
// Range: 0x1FAF20 -> 0x1FB1E4
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAF20 -> 0x1FB1E4
        signed int ival; // r29+0x4C
        unsigned int tag; // r29+0x48
        signed int maxamt; // r29+0x44
        signed int actamt; // r29+0x40
        class st_XSAVEGAME_CLIENT * clt; // r7
        signed int i; // r6
        signed int found; // r17
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * dfltclt; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB1F0 -> 0x001FB2D0
*/
// Range: 0x1FB1F0 -> 0x1FB2D0
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB1F0 -> 0x1FB2D0
        signed int result; // r16
        signed int ival; // r29+0x3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB2D0 -> 0x001FB328
*/
// Range: 0x1FB2D0 -> 0x1FB328
void xSG_cb_ISGChange(enum en_CHGCODE what /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB2D0 -> 0x1FB328
        class XSGAutoData * asg; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB330 -> 0x001FB430
*/
// Range: 0x1FB330 -> 0x1FB430
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB330 -> 0x1FB430
        signed int result; // r16
        signed int rc; // r2
        char * name; // r2
        char browselabel[64]; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB430 -> 0x001FB4FC
*/
// Range: 0x1FB430 -> 0x1FB4FC
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB430 -> 0x1FB4FC
        char * last_bufpos; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB500 -> 0x001FB580
*/
// Range: 0x1FB500 -> 0x1FB580
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB500 -> 0x1FB580
        char * last_bufpos; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB580 -> 0x001FB74C
*/
// Range: 0x1FB580 -> 0x1FB74C
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB580 -> 0x1FB74C
        signed int result; // r20
        signed int rc; // r19
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
        char bfill; // r29+0x8F
        signed int needfill; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB750 -> 0x001FB7F0
*/
// Range: 0x1FB750 -> 0x1FB7F0
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB750 -> 0x1FB7F0
        signed int result; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB7F0 -> 0x001FB90C
*/
// Range: 0x1FB7F0 -> 0x1FB90C
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB7F0 -> 0x1FB90C
        signed int result; // r19
        signed int i; // r18
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cltamt; // r29+0x6C
        signed int cltmax; // r29+0x68
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB910 -> 0x001FBB20
*/
// Range: 0x1FB910 -> 0x1FBB20
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FB910 -> 0x1FBB20
        signed int num_found; // r20
        signed int i; // r19
        char readbuf[116]; // r29+0x80
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB20 -> 0x001FBB2C
*/
// Range: 0x1FBB20 -> 0x1FBB2C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBB20 -> 0x1FBB2C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB30 -> 0x001FBB3C
*/
// Range: 0x1FBB30 -> 0x1FBB3C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, unsigned int * buff /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBB30 -> 0x1FBB3C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB40 -> 0x001FBB4C
*/
// Range: 0x1FBB40 -> 0x1FBB4C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBB40 -> 0x1FBB4C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB50 -> 0x001FBB5C
*/
// Range: 0x1FBB50 -> 0x1FBB5C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBB50 -> 0x1FBB5C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB60 -> 0x001FBC74
*/
// Range: 0x1FBB60 -> 0x1FBC74
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBB60 -> 0x1FBC74
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBC80 -> 0x001FBC8C
*/
// Range: 0x1FBC80 -> 0x1FBC8C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBC80 -> 0x1FBC8C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBC90 -> 0x001FBC9C
*/
// Range: 0x1FBC90 -> 0x1FBC9C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, unsigned int * data /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBC90 -> 0x1FBC9C
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBCA0 -> 0x001FBCAC
*/
// Range: 0x1FBCA0 -> 0x1FBCAC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBCA0 -> 0x1FBCAC
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBCB0 -> 0x001FBCBC
*/
// Range: 0x1FBCB0 -> 0x1FBCBC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBCB0 -> 0x1FBCBC
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBCC0 -> 0x001FBCEC
*/
// Range: 0x1FBCC0 -> 0x1FBCEC
signed int xSGWriteStrLen(char * str /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBCC0 -> 0x1FBCEC
        signed int len; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBCF0 -> 0x001FBE40
*/
// Range: 0x1FBCF0 -> 0x1FBE40
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int elesiz /* r19 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBCF0 -> 0x1FBE40
        signed int cnt; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int is_ok; // r16
        void * mcprc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBE40 -> 0x001FBEE8
*/
// Range: 0x1FBE40 -> 0x1FBEE8
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBE40 -> 0x1FBEE8
        char fundata[32]; // r29+0x90
        class st_XSAVEGAME_LEADER discard; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBEF0 -> 0x001FBFD8
*/
// Range: 0x1FBEF0 -> 0x1FBFD8
static signed int xSG_cb_leader_svproc(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * original_xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBEF0 -> 0x1FBFD8
        class st_XSAVEGAME_DATA * xsg; // r16
        class st_XSAVEGAME_LEADER leader; // r29+0x60
        char fundata[23]; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBFE0 -> 0x001FBFF4
*/
// Range: 0x1FBFE0 -> 0x1FBFF4
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FBFE0 -> 0x1FBFF4
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC000 -> 0x001FC154
*/
// Range: 0x1FC000 -> 0x1FC154
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int block /* r5 */, enum en_XSG_WHYFAIL * whyFail /* r18 */, char * errmsg /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC000 -> 0x1FC154
        enum en_XSGASYNC_STATUS xstat; // r17
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_ASYNC_OPERR whyerr; // r16
        enum en_XSG_WHYFAIL con; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC160 -> 0x001FC338
*/
// Range: 0x1FC160 -> 0x1FC338
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC160 -> 0x1FC338
        signed int result; // r17
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC340 -> 0x001FC57C
*/
// Range: 0x1FC340 -> 0x1FC57C
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC340 -> 0x1FC57C
        signed int result; // r16
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC580 -> 0x001FC6F4
*/
// Range: 0x1FC580 -> 0x1FC6F4
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int gidx /* r2 */, char * label /* r2 */, signed int progress /* r19 */, signed long playtime /* r18 */, signed int thumbIconIdx /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC580 -> 0x1FC6F4
        signed int result; // r16
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC700 -> 0x001FC71C
*/
// Range: 0x1FC700 -> 0x1FC71C
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC700 -> 0x1FC71C
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC720 -> 0x001FC85C
*/
// Range: 0x1FC720 -> 0x1FC85C
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC720 -> 0x1FC85C
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC860 -> 0x001FC950
*/
// Range: 0x1FC860 -> 0x1FC950
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC860 -> 0x1FC950
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC950 -> 0x001FC9E8
*/
// Range: 0x1FC950 -> 0x1FC9E8
signed int xSGGameProgress(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC950 -> 0x1FC9E8
        signed int idx_thum; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC9F0 -> 0x001FCA88
*/
// Range: 0x1FC9F0 -> 0x1FCA88
signed int xSGGameThumbIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FC9F0 -> 0x1FCA88
        signed int idx_thum; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCA90 -> 0x001FCB30
*/
// Range: 0x1FCA90 -> 0x1FCB30
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCA90 -> 0x1FCB30
        char * da_name; // r16
        class st_XSAVEGAME_LEADER * lead; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCB30 -> 0x001FCC30
*/
// Range: 0x1FCB30 -> 0x1FCC30
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCB30 -> 0x1FCC30
        char * date; // r2
        char da_date[32]; // @ 0x005A3950
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCC30 -> 0x001FCD00
*/
// Range: 0x1FCC30 -> 0x1FCD00
signed int xSGGameSize(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCC30 -> 0x1FCD00
        signed int size; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCD00 -> 0x001FCDD8
*/
// Range: 0x1FCD00 -> 0x1FCDD8
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCD00 -> 0x1FCDD8
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCDE0 -> 0x001FCDE8
*/
// Range: 0x1FCDE0 -> 0x1FCDE8
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCDE0 -> 0x1FCDE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCDF0 -> 0x001FCDF8
*/
// Range: 0x1FCDF0 -> 0x1FCDF8
unsigned char xSGCheckMemoryCard(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int index /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCDF0 -> 0x1FCDF8
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCE00 -> 0x001FCEF4
*/
// Range: 0x1FCE00 -> 0x1FCEF4
signed int xSGTgtHaveRoomStartup(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCE00 -> 0x1FCEF4
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCF00 -> 0x001FCFF4
*/
// Range: 0x1FCF00 -> 0x1FCFF4
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FCF00 -> 0x1FCFF4
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD000 -> 0x001FD06C
*/
// Range: 0x1FD000 -> 0x1FD06C
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD000 -> 0x1FD06C
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD070 -> 0x001FD0F4
*/
// Range: 0x1FD070 -> 0x1FD0F4
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD070 -> 0x1FD0F4
        signed int result; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD100 -> 0x001FD110
*/
// Range: 0x1FD100 -> 0x1FD110
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * canRecover /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD100 -> 0x1FD110
        signed int result; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD110 -> 0x001FD194
*/
// Range: 0x1FD110 -> 0x1FD194
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * badEncode /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD110 -> 0x1FD194
        signed int result; // r16
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD1A0 -> 0x001FD1A8
*/
// Range: 0x1FD1A0 -> 0x1FD1A8
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD1A0 -> 0x1FD1A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD1B0 -> 0x001FD1B8
*/
// Range: 0x1FD1B0 -> 0x1FD1B8
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD1B0 -> 0x1FD1B8
        signed int cnt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD1C0 -> 0x001FD2E0
*/
// Range: 0x1FD1C0 -> 0x1FD2E0
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD1C0 -> 0x1FD2E0
        signed int result; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD2E0 -> 0x001FD3DC
*/
// Range: 0x1FD2E0 -> 0x1FD3DC
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD2E0 -> 0x1FD3DC
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD3E0 -> 0x001FD418
*/
// Range: 0x1FD3E0 -> 0x1FD418
signed int xSGShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD3E0 -> 0x1FD418
    }
}

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD420 -> 0x001FD498
*/
// Range: 0x1FD420 -> 0x1FD498
signed int xSGStartup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FD420 -> 0x1FD498
    }
}

