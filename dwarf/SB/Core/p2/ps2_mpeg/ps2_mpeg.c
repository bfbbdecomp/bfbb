/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class VoData * voBufData; // size: 0x4, address: 0x50F8CC
static class VoTag * voBufTag; // size: 0x4, address: 0x50F8D0
static __int128 * viBufTag; // size: 0x4, address: 0x50F8D4
static unsigned char * mpegWork; // size: 0x4, address: 0x50F8D8
static signed int mpegWorkSz; // size: 0x4, address: 0x50F8DC
static char * defStack; // size: 0x4, address: 0x50F8E0
class ReadBuf * readBufp; // size: 0x4, address: 0x50F8E4
static unsigned char * audioBuff; // size: 0x4, address: 0x50F8E8
static __int128 * viBufData; // size: 0x4, address: 0x50F8EC
static char * videoDecStack; // size: 0x4, address: 0x50F8F0
static class TimeStamp * timeStamp; // size: 0x4, address: 0x50F8F4
signed int videoDecTh; // size: 0x4, address: 0x50F8F8
signed int defaultTh; // size: 0x4, address: 0x50F8FC
class StrFile infile; // size: 0xC, address: 0x53F920
class VideoDec videoDec; // size: 0xB8, address: 0x53F930
class AudioDec audioDec; // size: 0x5C, address: 0x53F9F0
class VoBuf voBuf; // size: 0x14, address: 0x53FA50
signed int frd; // size: 0x4, address: 0x50F900
unsigned int controller_val; // size: 0x4, address: 0x0
signed int isWithAudio; // size: 0x4, address: 0x50E810
class sceGsDBuff sony_db; // size: 0x230, address: 0x53FA70
static unsigned int skip_buttons; // size: 0x4, address: 0x50F904
static unsigned int skip_time; // size: 0x4, address: 0x50F908
signed int handler_endimage(signed int); // size: 0x0, address: 0x1BC3F0
signed int vblankHandler(signed int); // size: 0x0, address: 0x1BC430
void * _gp; // size: 0x4, address: 0x516470
void videoDecMain(class VideoDec *); // size: 0x0, address: 0x1BEF40
void defMain(void *); // size: 0x0, address: 0x1BCB90
signed int pcmCallback(class sceMpeg *, class sceMpegCbDataStr *, void *); // size: 0x0, address: 0x1BD470
signed int videoCallback(class sceMpeg *, class sceMpegCbDataStr *, void *); // size: 0x0, address: 0x1BD630
class _tagxPad mPad[4]; // size: 0x520, address: 0x568E70
class sceIpuDmaEnv {
    // total size: 0x24
public:
    unsigned int d4madr; // offset 0x0, size 0x4
    unsigned int d4tadr; // offset 0x4, size 0x4
    unsigned int d4qwc; // offset 0x8, size 0x4
    unsigned int d4chcr; // offset 0xC, size 0x4
    unsigned int d3madr; // offset 0x10, size 0x4
    unsigned int d3qwc; // offset 0x14, size 0x4
    unsigned int d3chcr; // offset 0x18, size 0x4
    unsigned int ipubp; // offset 0x1C, size 0x4
    unsigned int ipuctrl; // offset 0x20, size 0x4
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
class ThreadParam {
    // total size: 0x30
public:
    signed int status; // offset 0x0, size 0x4
    void (* entry)(void *); // offset 0x4, size 0x4
    void * stack; // offset 0x8, size 0x4
    signed int stackSize; // offset 0xC, size 0x4
    void * gpReg; // offset 0x10, size 0x4
    signed int initPriority; // offset 0x14, size 0x4
    signed int currentPriority; // offset 0x18, size 0x4
    unsigned int attr; // offset 0x1C, size 0x4
    unsigned int option; // offset 0x20, size 0x4
    signed int waitType; // offset 0x24, size 0x4
    signed int waitId; // offset 0x28, size 0x4
    signed int wakeupCount; // offset 0x2C, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class VoData {
    // total size: 0x12C000
public:
    unsigned char v[1228800]; // offset 0x0, size 0x12C000
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
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
enum sceMpegCbType {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
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
class _tagxPad {
    // total size: 0x148
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
class VideoDec {
    // total size: 0xB8
public:
    class sceMpeg mpeg; // offset 0x0, size 0x48
    class ViBuf vibuf; // offset 0x48, size 0x60
    unsigned int state; // offset 0xA8, size 0x4
    signed int sema; // offset 0xAC, size 0x4
    signed int hid_endimage; // offset 0xB0, size 0x4
    signed int hid_vblank; // offset 0xB4, size 0x4
};
class ReadBuf {
    // total size: 0x5000C
public:
    unsigned char data[327680]; // offset 0x0, size 0x50000
    signed int put; // offset 0x50000, size 0x4
    signed int count; // offset 0x50004, size 0x4
    signed int size; // offset 0x50008, size 0x4
};
class StrFile {
    // total size: 0xC
public:
    signed int file; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int current; // offset 0x8, size 0x4
};
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
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
class VoTag {
    // total size: 0x39240
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][29248]; // offset 0x40, size 0x39200
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
class sceGsDthe {
    // total size: 0x8
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
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
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class TimeStamp {
    // total size: 0x18
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
};
class sceMpegCbDataStr {
    // total size: 0x20
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    unsigned char * header; // offset 0x4, size 0x4
    unsigned char * data; // offset 0x8, size 0x4
    unsigned int len; // offset 0xC, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
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
class SpuStreamHeader {
    // total size: 0x20
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int type; // offset 0x8, size 0x4
    signed int rate; // offset 0xC, size 0x4
    signed int ch; // offset 0x10, size 0x4
    signed int interSize; // offset 0x14, size 0x4
    signed int loopStart; // offset 0x18, size 0x4
    signed int loopEnd; // offset 0x1C, size 0x4
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
class tGS_SMODE2 {
    // total size: 0x8
public:
    unsigned int INT : 1; // offset 0x0, size 0x4
    unsigned int FFMD : 1; // offset 0x0, size 0x4
    unsigned int DPMS : 2; // offset 0x0, size 0x4
    unsigned int p0 : 28; // offset 0x0, size 0x4
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
class ViBuf {
    // total size: 0x60
public:
    __int128 * data; // offset 0x0, size 0x4
    __int128 * tag; // offset 0x4, size 0x4
    signed int n; // offset 0x8, size 0x4
    signed int dmaStart; // offset 0xC, size 0x4
    signed int dmaN; // offset 0x10, size 0x4
    signed int readBytes; // offset 0x14, size 0x4
    signed int buffSize; // offset 0x18, size 0x4
    class sceIpuDmaEnv env; // offset 0x1C, size 0x24
    signed int sema; // offset 0x40, size 0x4
    signed int isActive; // offset 0x44, size 0x4
    signed long totalBytes; // offset 0x48, size 0x4
    class TimeStamp * ts; // offset 0x50, size 0x4
    signed int n_ts; // offset 0x54, size 0x4
    signed int count_ts; // offset 0x58, size 0x4
    signed int wt_ts; // offset 0x5C, size 0x4
};
class sceMpeg {
    // total size: 0x48
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int frameCount; // offset 0x8, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
    unsigned long flags; // offset 0x20, size 0x4
    signed long pts2nd; // offset 0x28, size 0x4
    signed long dts2nd; // offset 0x30, size 0x4
    unsigned long flags2nd; // offset 0x38, size 0x4
    void * sys; // offset 0x40, size 0x4
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
class SpuStreamBody {
    // total size: 0x8
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
};
class sceGsXyz {
    // total size: 0x8
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
class AudioDec {
    // total size: 0x5C
public:
    signed int state; // offset 0x0, size 0x4
    class SpuStreamHeader sshd; // offset 0x4, size 0x20
    class SpuStreamBody ssbd; // offset 0x24, size 0x8
    signed int hdrCount; // offset 0x2C, size 0x4
    unsigned char * data; // offset 0x30, size 0x4
    signed int put; // offset 0x34, size 0x4
    signed int count; // offset 0x38, size 0x4
    signed int size; // offset 0x3C, size 0x4
    signed int totalBytes; // offset 0x40, size 0x4
    signed int iopBuff; // offset 0x44, size 0x4
    signed int iopBuffSize; // offset 0x48, size 0x4
    signed int iopLastPos; // offset 0x4C, size 0x4
    signed int iopPausePos; // offset 0x50, size 0x4
    signed int totalBytesSent; // offset 0x54, size 0x4
    signed int iopZero; // offset 0x58, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCB80 -> 0x001BCB90
*/
// Range: 0x1BCB80 -> 0x1BCB90
void ErrMessage(char * message /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BCB80 -> 0x1BCB90
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCB90 -> 0x001BCBA8
*/
// Range: 0x1BCB90 -> 0x1BCBA8
static void defMain() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BCB90 -> 0x1BCBA8
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCBB0 -> 0x001BCE10
*/
// Range: 0x1BCBB0 -> 0x1BCE10
static signed int initAll(char * bsfilename /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BCBB0 -> 0x1BCE10
        class ThreadParam th_param; // r29+0x80
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCE10 -> 0x001BCE18
*/
// Range: 0x1BCE10 -> 0x1BCE18
void switchThread() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BCE10 -> 0x1BCE18
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCE20 -> 0x001BD0B8
*/
// Range: 0x1BCE20 -> 0x1BD0B8
static signed int readMpeg(class VideoDec * vd /* r19 */, class ReadBuf * rb /* r18 */, class StrFile * file /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BCE20 -> 0x1BD0B8
        unsigned char * put_ptr; // r29+0x9C
        unsigned char * get_ptr; // r29+0x98
        signed int putsize; // r2
        signed int getsize; // r2
        signed int readrest; // r17
        signed int writerest; // r16
        signed int count; // r20
        signed int proceed; // r20
        signed int isStarted; // r21
        signed long t0; // r22
        signed long t1; // r20
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD0C0 -> 0x001BD464
*/
// Range: 0x1BD0C0 -> 0x1BD464
signed int ps2_mpeg_play(char * fname /* r20 */, char * work_area /* r19 */, signed int work_area_size /* r18 */, unsigned int buttons /* r17 */, float time /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BD0C0 -> 0x1BD464
        unsigned int i; // r17
        char * ptr; // r3
        char * extra_buf; // r16
        char * bp; // r5
    }
}

