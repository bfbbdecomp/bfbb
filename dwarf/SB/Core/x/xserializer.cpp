/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_serinit; // size: 0x4, address: 0x50FAFC
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x5A50A0
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x5A50D0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x5A5150
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x202F40
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x203110
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x2031F0
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x202FB0
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x203000
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x203180
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x2031D0
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x203250
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x203280
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x2034E0
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x2034A0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xSerial {
    // total size: 0x1C
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
class st_SERIAL_CLIENTINFO {
    // total size: 0x10
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int * membuf; // offset 0x4, size 0x4
    signed int trueoff; // offset 0x8, size 0x4
    signed int actsize; // offset 0xC, size 0x4
};
class st_XSAVEGAME_DATA {
    // total size: 0x0
};
class st_XSAVEGAME_READCONTEXT {
    // total size: 0x0
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class st_XSAVEGAME_WRITECONTEXT {
    // total size: 0x0
};
class st_SERIAL_PERCID_SIZE {
    // total size: 0x8
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int needsize; // offset 0x4, size 0x4
};
class st_XSERIAL_DATA_PRIV {
    // total size: 0x24
public:
    signed int flg_info; // offset 0x0, size 0x4
    signed int * bitbuf; // offset 0x4, size 0x4
    signed int buf_bytcnt; // offset 0x8, size 0x4
    class st_SERIAL_CLIENTINFO * cltbuf; // offset 0xC, size 0x4
    class st_SERIAL_CLIENTINFO * cltnext; // offset 0x10, size 0x4
    class st_XORDEREDARRAY cltlist; // offset 0x14, size 0x10
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202F40 -> 0x00202FAC
*/
// Range: 0x202F40 -> 0x202FAC
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x202F40 -> 0x202FAC
        char filbuf[9]; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202FB0 -> 0x00202FF8
*/
// Range: 0x202FB0 -> 0x202FF8
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x202FB0 -> 0x202FF8
        char filbuf[9]; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203000 -> 0x0020310C
*/
// Range: 0x203000 -> 0x20310C
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203000 -> 0x20310C
        class st_XSERIAL_DATA_PRIV * xsd; // r9
        signed int i; // r8
        signed int tally; // r5
        signed int size; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203110 -> 0x00203174
*/
// Range: 0x203110 -> 0x203174
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203110 -> 0x203174
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203180 -> 0x002031CC
*/
// Range: 0x203180 -> 0x2031CC
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203180 -> 0x2031CC
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002031D0 -> 0x002031E8
*/
// Range: 0x2031D0 -> 0x2031E8
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2031D0 -> 0x2031E8
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002031F0 -> 0x0020324C
*/
// Range: 0x2031F0 -> 0x20324C
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2031F0 -> 0x20324C
        class st_XSERIAL_DATA_PRIV * xsd; // r16
        signed int ver; // r29+0x2C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203250 -> 0x00203280
*/
// Range: 0x203250 -> 0x203280
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203250 -> 0x203280
        signed int ver; // r29+0x1C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203280 -> 0x00203294
*/
// Range: 0x203280 -> 0x203294
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203280 -> 0x203294
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002032A0 -> 0x00203400
*/
// Range: 0x2032A0 -> 0x203400
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2032A0 -> 0x203400
        class st_XSERIAL_DATA_PRIV * xsd; // r18
        class st_SERIAL_CLIENTINFO * clt; // r2
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203400 -> 0x0020349C
*/
// Range: 0x203400 -> 0x20349C
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203400 -> 0x20349C
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        class st_SERIAL_CLIENTINFO * clt; // r16
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002034A0 -> 0x002034E0
*/
// Range: 0x2034A0 -> 0x2034E0
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2034A0 -> 0x2034E0
        signed int rc; // r2
        unsigned int idtag; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002034E0 -> 0x00203528
*/
// Range: 0x2034E0 -> 0x203528
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2034E0 -> 0x203528
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203530 -> 0x00203734
*/
// Range: 0x203530 -> 0x203734
static void xSER_init_buffers(signed int count /* r19 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203530 -> 0x203734
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        signed int i; // r16
        signed int tally; // r20
        signed int sicnt; // r2
        class st_SERIAL_PERCID_SIZE * sitmp; // r5
        class st_SERIAL_CLIENTINFO * tmp_clt; // r21
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203740 -> 0x00203758
*/
// Range: 0x203740 -> 0x203758
void xSerialWipeMainBuffer() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203740 -> 0x203758
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203760 -> 0x00203808
*/
// Range: 0x203760 -> 0x203808
signed int rdbit(class xSerial * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203760 -> 0x203808
        class st_SERIAL_CLIENTINFO * clt; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203810 -> 0x002038F0
*/
// Range: 0x203810 -> 0x2038F0
void wrbit(class xSerial * this /* r2 */, signed int is_on /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203810 -> 0x2038F0
        class st_SERIAL_CLIENTINFO * clt; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002038F0 -> 0x002038FC
*/
// Range: 0x2038F0 -> 0x2038FC
signed int Read(class xSerial * this /* r2 */, float * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2038F0 -> 0x2038FC
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203900 -> 0x0020390C
*/
// Range: 0x203900 -> 0x20390C
signed int Read(class xSerial * this /* r2 */, unsigned int * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203900 -> 0x20390C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203910 -> 0x0020391C
*/
// Range: 0x203910 -> 0x20391C
signed int Read(class xSerial * this /* r2 */, signed int * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203910 -> 0x20391C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203920 -> 0x0020392C
*/
// Range: 0x203920 -> 0x20392C
signed int Read(class xSerial * this /* r2 */, signed short * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203920 -> 0x20392C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203930 -> 0x0020393C
*/
// Range: 0x203930 -> 0x20393C
signed int Read(class xSerial * this /* r2 */, unsigned char * buf /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203930 -> 0x20393C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203940 -> 0x0020394C
*/
// Range: 0x203940 -> 0x20394C
signed int Read_b7(class xSerial * this /* r2 */, unsigned int * bits /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203940 -> 0x20394C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203950 -> 0x0020395C
*/
// Range: 0x203950 -> 0x20395C
signed int Read_b1(class xSerial * this /* r2 */, signed int * bits /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203950 -> 0x20395C
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203960 -> 0x00203AF4
*/
// Range: 0x203960 -> 0x203AF4
signed int Read(class xSerial * this /* r17 */, char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203960 -> 0x203AF4
        signed int nbit; // r16
        char * cptr; // r20
        signed int * iptr; // r20
        signed int bitval; // r2
        signed int bidx; // r19
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203B00 -> 0x00203B28
*/
// Range: 0x203B00 -> 0x203B28
signed int Write(class xSerial * this /* r2 */, float data /* r29+0x1C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203B00 -> 0x203B28
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203B30 -> 0x00203B58
*/
// Range: 0x203B30 -> 0x203B58
signed int Write(class xSerial * this /* r2 */, unsigned int data /* r29+0x1C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203B30 -> 0x203B58
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203B60 -> 0x00203B88
*/
// Range: 0x203B60 -> 0x203B88
signed int Write(class xSerial * this /* r2 */, signed int data /* r29+0x1C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203B60 -> 0x203B88
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203B90 -> 0x00203BB8
*/
// Range: 0x203B90 -> 0x203BB8
signed int Write(class xSerial * this /* r2 */, signed short data /* r29+0x1E */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203B90 -> 0x203BB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203BC0 -> 0x00203BE8
*/
// Range: 0x203BC0 -> 0x203BE8
signed int Write(class xSerial * this /* r2 */, unsigned char data /* r29+0x1F */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203BC0 -> 0x203BE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203BF0 -> 0x00203C18
*/
// Range: 0x203BF0 -> 0x203C18
signed int Write_b7(class xSerial * this /* r2 */, unsigned int bits /* r29+0x1C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203BF0 -> 0x203C18
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203C20 -> 0x00203C48
*/
// Range: 0x203C20 -> 0x203C48
signed int Write_b1(class xSerial * this /* r2 */, signed int bits /* r29+0x1C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203C20 -> 0x203C48
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203C50 -> 0x00203D90
*/
// Range: 0x203C50 -> 0x203D90
signed int Write(class xSerial * this /* r17 */, char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203C50 -> 0x203D90
        signed int nbit; // r16
        char * cptr; // r20
        signed int * iptr; // r20
        signed int bidx; // r19
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203D90 -> 0x00203DDC
*/
// Range: 0x203D90 -> 0x203DDC
void setClient(class xSerial * this /* r16 */, unsigned int idtag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203D90 -> 0x203DDC
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203DE0 -> 0x00203E24
*/
// Range: 0x203DE0 -> 0x203E24
void * __dt(class xSerial * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203DE0 -> 0x203E24
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203E30 -> 0x00203E38
*/
// Range: 0x203E30 -> 0x203E38
void * __ct(class xSerial * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203E30 -> 0x203E38
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203E40 -> 0x00203F50
*/
// Range: 0x203E40 -> 0x203F50
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203E40 -> 0x203F50
        signed int i; // r20
        class st_XSERIAL_DATA_PRIV * xsd; // r19
        class st_SERIAL_CLIENTINFO * clt; // r18
        class xSerial xser; // r29+0xA0
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203F50 -> 0x00203F64
*/
// Range: 0x203F50 -> 0x203F64
signed int xSerialShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203F50 -> 0x203F64
    }
}

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203F70 -> 0x00204098
*/
// Range: 0x203F70 -> 0x204098
signed int xSerialStartup(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x203F70 -> 0x204098
    }
}

