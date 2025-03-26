/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int isCountVblank; // size: 0x4, address: 0x50F8B8
signed int vblankCount; // size: 0x4, address: 0x50F8BC
signed int isFrameEnd; // size: 0x4, address: 0x50F8C0
signed int oddeven; // size: 0x4, address: 0x50F8C4
signed int handler_error; // size: 0x4, address: 0x50F8C8
static __int128 _packetBase[6]; // size: 0x60, address: 0x53F8C0
signed int frd; // size: 0x4, address: 0x50F900
class VoBuf voBuf; // size: 0x14, address: 0x53FA50
class sceGsDBuff sony_db; // size: 0x230, address: 0x53FA70
class tGS_BGCOLOR {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int p0 : 8; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class VoData {
    // total size: 0x12C000
public:
    unsigned char v[1228800]; // offset 0x0, size 0x12C000
};
class sceGsXyz {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
class VoTag {
    // total size: 0x39240
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][29248]; // offset 0x40, size 0x39200
};
class tGS_SMODE2 {
    // total size: 0x8
public:
    unsigned int INT : 1; // offset 0x0, size 0x4
    unsigned int FFMD : 1; // offset 0x0, size 0x4
    unsigned int DPMS : 2; // offset 0x0, size 0x4
    unsigned int p0 : 28; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class sceGifTag {
    // total size: 0x10
public:
    unsigned long NLOOP : 15; // offset 0x0, size 0x4
    unsigned long EOP : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long id : 14; // offset 0x0, size 0x4
    unsigned long PRE : 1; // offset 0x0, size 0x4
    unsigned long PRIM : 11; // offset 0x0, size 0x4
    unsigned long FLG : 2; // offset 0x0, size 0x4
    unsigned long NREG : 4; // offset 0x0, size 0x4
    unsigned long REGS0 : 4; // offset 0x8, size 0x4
    unsigned long REGS1 : 4; // offset 0x8, size 0x4
    unsigned long REGS2 : 4; // offset 0x8, size 0x4
    unsigned long REGS3 : 4; // offset 0x8, size 0x4
    unsigned long REGS4 : 4; // offset 0x8, size 0x4
    unsigned long REGS5 : 4; // offset 0x8, size 0x4
    unsigned long REGS6 : 4; // offset 0x8, size 0x4
    unsigned long REGS7 : 4; // offset 0x8, size 0x4
    unsigned long REGS8 : 4; // offset 0x8, size 0x4
    unsigned long REGS9 : 4; // offset 0x8, size 0x4
    unsigned long REGS10 : 4; // offset 0x8, size 0x4
    unsigned long REGS11 : 4; // offset 0x8, size 0x4
    unsigned long REGS12 : 4; // offset 0x8, size 0x4
    unsigned long REGS13 : 4; // offset 0x8, size 0x4
    unsigned long REGS14 : 4; // offset 0x8, size 0x4
    unsigned long REGS15 : 4; // offset 0x8, size 0x4
};
class sceGsScissor {
    // total size: 0x8
public:
    unsigned long SCAX0 : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SCAX1 : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long SCAY0 : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long SCAY1 : 11; // offset 0x0, size 0x4
    unsigned long pad59 : 5; // offset 0x0, size 0x4
};
class VoBuf {
    // total size: 0x14
public:
    class VoData * data; // offset 0x0, size 0x4
    class VoTag * tag; // offset 0x4, size 0x4
    signed int write; // offset 0x8, size 0x4
    signed int count; // offset 0xC, size 0x4
    signed int size; // offset 0x10, size 0x4
};
class tGS_DISPFB2 {
    // total size: 0x8
public:
    unsigned int FBP : 9; // offset 0x0, size 0x4
    unsigned int FBW : 6; // offset 0x0, size 0x4
    unsigned int PSM : 5; // offset 0x0, size 0x4
    unsigned int p0 : 12; // offset 0x0, size 0x4
    unsigned int DBX : 11; // offset 0x4, size 0x4
    unsigned int DBY : 11; // offset 0x4, size 0x4
    unsigned int p1 : 10; // offset 0x4, size 0x4
};
class sceGsClear {
    // total size: 0x60
public:
    class sceGsTest testa; // offset 0x0, size 0x8
    signed long testaaddr; // offset 0x8, size 0x4
    class sceGsPrim prim; // offset 0x10, size 0x8
    signed long primaddr; // offset 0x18, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x20, size 0x8
    signed long rgbaqaddr; // offset 0x28, size 0x4
    class sceGsXyz xyz2a; // offset 0x30, size 0x8
    signed long xyz2aaddr; // offset 0x38, size 0x4
    class sceGsXyz xyz2b; // offset 0x40, size 0x8
    signed long xyz2baddr; // offset 0x48, size 0x4
    class sceGsTest testb; // offset 0x50, size 0x8
    signed long testbaddr; // offset 0x58, size 0x4
};
class sceGsZbuf {
    // total size: 0x8
public:
    unsigned long ZBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 15; // offset 0x0, size 0x4
    unsigned long PSM : 4; // offset 0x0, size 0x4
    unsigned long pad28 : 4; // offset 0x0, size 0x4
    unsigned long ZMSK : 1; // offset 0x0, size 0x4
    unsigned long pad33 : 31; // offset 0x0, size 0x4
};
class sceGsPrim {
    // total size: 0x8
public:
    unsigned long PRIM : 3; // offset 0x0, size 0x4
    unsigned long IIP : 1; // offset 0x0, size 0x4
    unsigned long TME : 1; // offset 0x0, size 0x4
    unsigned long FGE : 1; // offset 0x0, size 0x4
    unsigned long ABE : 1; // offset 0x0, size 0x4
    unsigned long AA1 : 1; // offset 0x0, size 0x4
    unsigned long FST : 1; // offset 0x0, size 0x4
    unsigned long CTXT : 1; // offset 0x0, size 0x4
    unsigned long FIX : 1; // offset 0x0, size 0x4
    unsigned long pad11 : 53; // offset 0x0, size 0x4
};
class _sceDmaTag {
    // total size: 0x10
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned char mark; // offset 0x2, size 0x1
    unsigned char id; // offset 0x3, size 0x1
    class _sceDmaTag * next; // offset 0x4, size 0x4
    unsigned int p[2]; // offset 0x8, size 0x8
};
class sceGsFrame {
    // total size: 0x8
public:
    unsigned long FBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 7; // offset 0x0, size 0x4
    unsigned long FBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long FBMSK : 32; // offset 0x0, size 0x4
};
class sceGsDispEnv {
    // total size: 0x28
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
};
class sceGsDBuff {
    // total size: 0x230
public:
    class sceGsDispEnv disp[2]; // offset 0x0, size 0x50
    class sceGifTag giftag0; // offset 0x50, size 0x10
    class sceGsDrawEnv1 draw0; // offset 0x60, size 0x80
    class sceGsClear clear0; // offset 0xE0, size 0x60
    class sceGifTag giftag1; // offset 0x140, size 0x10
    class sceGsDrawEnv1 draw1; // offset 0x150, size 0x80
    class sceGsClear clear1; // offset 0x1D0, size 0x60
};
class tGS_DISPLAY2 {
    // total size: 0x8
public:
    unsigned int DX : 12; // offset 0x0, size 0x4
    unsigned int DY : 11; // offset 0x0, size 0x4
    unsigned int MAGH : 4; // offset 0x0, size 0x4
    unsigned int MAGV : 2; // offset 0x0, size 0x4
    unsigned int p0 : 3; // offset 0x0, size 0x4
    unsigned int DW : 12; // offset 0x4, size 0x4
    unsigned int DH : 11; // offset 0x4, size 0x4
    unsigned int p1 : 9; // offset 0x4, size 0x4
};
class sceGsDrawEnv1 {
    // total size: 0x80
public:
    class sceGsFrame frame1; // offset 0x0, size 0x8
    unsigned long frame1addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf1; // offset 0x10, size 0x8
    signed long zbuf1addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset1; // offset 0x20, size 0x8
    signed long xyoffset1addr; // offset 0x28, size 0x4
    class sceGsScissor scissor1; // offset 0x30, size 0x8
    signed long scissor1addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test1; // offset 0x70, size 0x8
    signed long test1addr; // offset 0x78, size 0x4
};
class tD_CHCR {
    // total size: 0x4
public:
    unsigned int DIR : 1; // offset 0x0, size 0x4
    unsigned int p0 : 1; // offset 0x0, size 0x4
    unsigned int MOD : 2; // offset 0x0, size 0x4
    unsigned int ASP : 2; // offset 0x0, size 0x4
    unsigned int TTE : 1; // offset 0x0, size 0x4
    unsigned int TIE : 1; // offset 0x0, size 0x4
    unsigned int STR : 1; // offset 0x0, size 0x4
    unsigned int p1 : 7; // offset 0x0, size 0x4
    unsigned int TAG : 16; // offset 0x0, size 0x4
};
class sceGsTest {
    // total size: 0x8
public:
    unsigned long ATE : 1; // offset 0x0, size 0x4
    unsigned long ATST : 3; // offset 0x0, size 0x4
    unsigned long AREF : 8; // offset 0x0, size 0x4
    unsigned long AFAIL : 2; // offset 0x0, size 0x4
    unsigned long DATE : 1; // offset 0x0, size 0x4
    unsigned long DATM : 1; // offset 0x0, size 0x4
    unsigned long ZTE : 1; // offset 0x0, size 0x4
    unsigned long ZTST : 2; // offset 0x0, size 0x4
    unsigned long pad19 : 45; // offset 0x0, size 0x4
};
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceDmaChan {
    // total size: 0x90
public:
    class tD_CHCR chcr; // offset 0x0, size 0x4
    unsigned int p0[3]; // offset 0x4, size 0xC
    void * madr; // offset 0x10, size 0x4
    unsigned int p1[3]; // offset 0x14, size 0xC
    unsigned int qwc; // offset 0x20, size 0x4
    unsigned int p2[3]; // offset 0x24, size 0xC
    class _sceDmaTag * tadr; // offset 0x30, size 0x4
    unsigned int p3[3]; // offset 0x34, size 0xC
    void * as0; // offset 0x40, size 0x4
    unsigned int p4[3]; // offset 0x44, size 0xC
    void * as1; // offset 0x50, size 0x4
    unsigned int p5[3]; // offset 0x54, size 0xC
    unsigned int p6[4]; // offset 0x60, size 0x10
    unsigned int p7[4]; // offset 0x70, size 0x10
    void * sadr; // offset 0x80, size 0x4
    unsigned int p8[3]; // offset 0x84, size 0xC
};
class sceGifPacket {
    // total size: 0x10
public:
    unsigned int * pCurrent; // offset 0x0, size 0x4
    __int128 * pBase; // offset 0x4, size 0x4
    __int128 * pDmaTag; // offset 0x8, size 0x4
    unsigned long * pGifTag; // offset 0xC, size 0x4
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class tGS_PMODE {
    // total size: 0x8
public:
    unsigned int EN1 : 1; // offset 0x0, size 0x4
    unsigned int EN2 : 1; // offset 0x0, size 0x4
    unsigned int CRTMD : 3; // offset 0x0, size 0x4
    unsigned int MMOD : 1; // offset 0x0, size 0x4
    unsigned int AMOD : 1; // offset 0x0, size 0x4
    unsigned int SLBG : 1; // offset 0x0, size 0x4
    unsigned int ALP : 8; // offset 0x0, size 0x4
    unsigned int p0 : 16; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
class sceGsColclamp {
    // total size: 0x8
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGsRgbaq {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC390 -> 0x001BC39C
*/
// Range: 0x1BC390 -> 0x1BC39C
void endDisplay() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC390 -> 0x1BC39C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC3A0 -> 0x001BC3E8
*/
// Range: 0x1BC3A0 -> 0x1BC3E8
void startDisplay(signed int waitEven /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC3A0 -> 0x1BC3E8
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC3F0 -> 0x001BC430
*/
// Range: 0x1BC3F0 -> 0x1BC430
signed int handler_endimage() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC3F0 -> 0x1BC430
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC430 -> 0x001BC604
*/
// Range: 0x1BC430 -> 0x1BC604
signed int vblankHandler() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC430 -> 0x1BC604
        class sceDmaChan * dmaGif_loadimage; // r17
        class VoTag * tag; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC610 -> 0x001BC90C
*/
// Range: 0x1BC610 -> 0x1BC90C
void setImageTag(unsigned int * tags /* r2 */, void * image /* r21 */, signed int index /* r16 */, signed int image_w /* r30 */, signed int image_h /* r29+0xAC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC610 -> 0x1BC90C
        signed int mbx; // r22
        signed int mby; // r23
        signed int i; // r20
        signed int j; // r19
        class sceGifPacket packet; // r29+0xD0
        unsigned long giftag[2]; // r29+0xC0
        unsigned long giftag_eop[2]; // r29+0xB0
        unsigned long * tag; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\disp.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC910 -> 0x001BCB80
*/
// Range: 0x1BC910 -> 0x1BCB80
void clearGsMem(signed int r /* r21 */, signed int g /* r20 */, signed int b /* r19 */, signed int disp_width /* r18 */, signed int disp_height /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC910 -> 0x1BCB80
        unsigned long giftag_clear[2]; // r29+0x80
        class sceGifPacket packet; // r29+0x70
        class sceDmaChan * dmaGif; // r16
    }
}

