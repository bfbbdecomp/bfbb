/*
    Compile unit: C:\SB\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSysFontTbl xSysFontLookup[128]; // size: 0x400, address: 0x0
static unsigned int xSysFontRGBA[4096]; // size: 0x4000, address: 0x0
static char * excep_table[14]; // size: 0x38, address: 0x0
static char * reg_table[32]; // size: 0x80, address: 0x0
static class _sceGpChain sChain; // size: 0x10, address: 0x0
static class sceGpPrimR * sSprpac; // size: 0x4, address: 0x0
static signed long iExceptionHangCurr; // size: 0x4, address: 0x0
static signed long iExceptionHangCheck; // size: 0x4, address: 0x0
static void * iExceptionHangAddr; // size: 0x4, address: 0x0
static unsigned int sOldFreeSpace; // size: 0x4, address: 0x0
static signed long sOldTime; // size: 0x4, address: 0x0
class sceGpTextureArg {
    // total size: 0x12
public:
    signed short tbp; // offset 0x0, size 0x2
    signed short tbw; // offset 0x2, size 0x2
    signed short tpsm; // offset 0x4, size 0x2
    signed short tx; // offset 0x6, size 0x2
    signed short ty; // offset 0x8, size 0x2
    signed short tw; // offset 0xA, size 0x2
    signed short th; // offset 0xC, size 0x2
    signed short cbp; // offset 0xE, size 0x2
    signed short cpsm; // offset 0x10, size 0x2
};
class sceGsTex1 {
    // total size: 0x8
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class sceGsBitbltbuf {
    // total size: 0x8
public:
    unsigned long SBP : 14; // offset 0x0, size 0x4
    unsigned long pad14 : 2; // offset 0x0, size 0x4
    unsigned long SBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long SPSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long DBP : 14; // offset 0x0, size 0x4
    unsigned long pad46 : 2; // offset 0x0, size 0x4
    unsigned long DBW : 6; // offset 0x0, size 0x4
    unsigned long pad54 : 2; // offset 0x0, size 0x4
    unsigned long DPSM : 6; // offset 0x0, size 0x4
    unsigned long pad62 : 2; // offset 0x0, size 0x4
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
class _sceGpChain {
    // total size: 0x10
public:
    __int128 * ot; // offset 0x0, size 0x4
    __int128 * pKick; // offset 0x4, size 0x4
    __int128 * pEnd; // offset 0x8, size 0x4
    signed int resolution; // offset 0xC, size 0x4
};
class sceGsTrxpos {
    // total size: 0x8
public:
    unsigned long SSAX : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SSAY : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long DSAX : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long DSAY : 11; // offset 0x0, size 0x4
    unsigned long DIR : 2; // offset 0x0, size 0x4
    unsigned long pad61 : 3; // offset 0x0, size 0x4
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
class sceGpLoadImage {
    // total size: 0xB0
public:
    class _sceDmaTag dmacnt; // offset 0x0, size 0x10
    class sceGifTag giftag1; // offset 0x10, size 0x10
    class sceGsBitbltbuf bitbltbuf; // offset 0x20, size 0x8
    signed long bitbltbufaddr; // offset 0x28, size 0x4
    class sceGsTrxpos trxpos; // offset 0x30, size 0x8
    signed long trxposaddr; // offset 0x38, size 0x4
    class sceGsTrxreg trxreg; // offset 0x40, size 0x8
    signed long trxregaddr; // offset 0x48, size 0x4
    class sceGsTrxdir trxdir; // offset 0x50, size 0x8
    signed long trxdiraddr; // offset 0x58, size 0x4
    class sceGifTag giftag2; // offset 0x60, size 0x10
    class _sceDmaTag dmaref; // offset 0x70, size 0x10
    class _sceDmaTag dmanext; // offset 0x80, size 0x10
    class sceGifTag giftag3; // offset 0x90, size 0x10
    class sceGsTexflush texflush; // offset 0xA0, size 0x8
    signed long texflushaddr; // offset 0xA8, size 0x4
};
class _sceGpAdc {
    // total size: 0x8
public:
    signed int ADC; // offset 0x0, size 0x4
    signed int pad; // offset 0x4, size 0x4
};
class sceGpAlphaEnv {
    // total size: 0x60
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag; // offset 0x10, size 0x10
    class sceGsAlpha alpha; // offset 0x20, size 0x8
    signed long alphaaddr; // offset 0x28, size 0x4
    class sceGsPabe pabe; // offset 0x30, size 0x8
    signed long pabeaddr; // offset 0x38, size 0x4
    class sceGsTexa texa; // offset 0x40, size 0x8
    signed long texaaddr; // offset 0x48, size 0x4
    class sceGsFba fba; // offset 0x50, size 0x8
    signed long fbaaddr; // offset 0x58, size 0x4
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
class sceGsTrxreg {
    // total size: 0x8
public:
    unsigned long RRW : 12; // offset 0x0, size 0x4
    unsigned long pad12 : 20; // offset 0x0, size 0x4
    unsigned long RRH : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class sceGsSt {
    // total size: 0x8
public:
    float S; // offset 0x0, size 0x4
    float T; // offset 0x4, size 0x4
};
class sceGsClamp {
    // total size: 0x8
public:
    unsigned long WMS : 2; // offset 0x0, size 0x4
    unsigned long WMT : 2; // offset 0x0, size 0x4
    unsigned long MINU : 10; // offset 0x0, size 0x4
    unsigned long MAXU : 10; // offset 0x0, size 0x4
    unsigned long MINV : 10; // offset 0x0, size 0x4
    unsigned long MAXV : 10; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
class _sceGpReg {
    // total size: 0x8
public:
    union { // inferred
        class sceGsPrim prim; // offset 0x0, size 0x8
        class sceGsRgbaq rgbaq; // offset 0x0, size 0x8
        class sceGsSt st; // offset 0x0, size 0x8
        class sceGsUv uv; // offset 0x0, size 0x8
        class sceGsXyzf xyzf; // offset 0x0, size 0x8
        class sceGsXyz xyz; // offset 0x0, size 0x8
        class sceGsTex0 tex0; // offset 0x0, size 0x8
        class sceGsClamp clamp; // offset 0x0, size 0x8
        class sceGsFog fog; // offset 0x0, size 0x8
        class _sceGpAdc adc; // offset 0x0, size 0x8
        unsigned long ul; // offset 0x0, size 0x4
        unsigned int ui[2]; // offset 0x0, size 0x8
    };
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
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class sceGsDispEnv {
    // total size: 0x28
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
};
class sceGsUv {
    // total size: 0x8
public:
    unsigned long U : 14; // offset 0x0, size 0x4
    unsigned long pad14 : 2; // offset 0x0, size 0x4
    unsigned long V : 14; // offset 0x0, size 0x4
    unsigned long pad30 : 34; // offset 0x0, size 0x4
};
class sceGsTexa {
    // total size: 0x8
public:
    unsigned long TA0 : 8; // offset 0x0, size 0x4
    unsigned long pad08 : 7; // offset 0x0, size 0x4
    unsigned long AEM : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long TA1 : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
class tGS_BGCOLOR {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int p0 : 8; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
class sceGsFba {
    // total size: 0x8
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGsPrmodecont {
    // total size: 0x8
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGsColclamp {
    // total size: 0x8
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
class sceGsXyoffset {
    // total size: 0x8
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
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
class sceGsRgbaq {
    // total size: 0x8
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};
class sceGsTex0 {
    // total size: 0x8
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
class _sceGifPackAd {
    // total size: 0x10
public:
    unsigned long DATA; // offset 0x0, size 0x4
    unsigned long ADDR; // offset 0x8, size 0x4
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
class sceGsFog {
    // total size: 0x8
public:
    unsigned long pad00 : 56; // offset 0x0, size 0x4
    unsigned long F : 8; // offset 0x0, size 0x4
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
class sceGsXyz {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
class sceGsAlpha {
    // total size: 0x8
public:
    unsigned long A : 2; // offset 0x0, size 0x4
    unsigned long B : 2; // offset 0x0, size 0x4
    unsigned long C : 2; // offset 0x0, size 0x4
    unsigned long D : 2; // offset 0x0, size 0x4
    unsigned long pad8 : 24; // offset 0x0, size 0x4
    unsigned long FIX : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
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
class sceGpPrimR {
    // total size: 0x50
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag1; // offset 0x10, size 0x10
    class _sceGifPackAd userreg; // offset 0x20, size 0x10
    class sceGifTag giftag2; // offset 0x30, size 0x10
    class _sceGpReg reg[1]; // offset 0x40, size 0x8
};
class sceGsTexflush {
    // total size: 0x8
public:
    unsigned long pad00; // offset 0x0, size 0x4
};
class sceGpTexEnv {
    // total size: 0x50
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag; // offset 0x10, size 0x10
    class sceGsTex1 tex1; // offset 0x20, size 0x8
    signed long tex1addr; // offset 0x28, size 0x4
    class sceGsTex0 tex0; // offset 0x30, size 0x8
    signed long tex0addr; // offset 0x38, size 0x4
    class sceGsClamp clamp; // offset 0x40, size 0x8
    signed long clampaddr; // offset 0x48, size 0x4
};
class xSysFontTbl {
    // total size: 0x8
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
};
class sceGsPabe {
    // total size: 0x8
public:
    unsigned long PABE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
class sceGsXyzf {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 24; // offset 0x0, size 0x4
    unsigned long F : 8; // offset 0x0, size 0x4
};
class sceGsTrxdir {
    // total size: 0x8
public:
    unsigned long XDR : 2; // offset 0x0, size 0x4
    unsigned long pad02 : 62; // offset 0x0, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7280 -> 0x003D7288
*/
// Range: 0x3D7280 -> 0x3D7288
void iExceptionRwDMAInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D7280 -> 0x3D7288
    }
}

/*
    Compile unit: C:\SB\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7290 -> 0x003D7298
*/
// Range: 0x3D7290 -> 0x3D7298
void iExceptionInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D7290 -> 0x3D7298
    }
}

