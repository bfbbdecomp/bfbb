/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class AudioDec audioDec; // size: 0x5C, address: 0x53F9F0
class VideoDec videoDec; // size: 0xB8, address: 0x53F930
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
class ReadBuf {
    // total size: 0x5000C
public:
    unsigned char data[327680]; // offset 0x0, size 0x50000
    signed int put; // offset 0x50000, size 0x4
    signed int count; // offset 0x50004, size 0x4
    signed int size; // offset 0x50008, size 0x4
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
class TimeStamp {
    // total size: 0x18
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
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
class SpuStreamBody {
    // total size: 0x8
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD470 -> 0x001BD624
*/
// Range: 0x1BD470 -> 0x1BD624
signed int pcmCallback(class sceMpegCbDataStr * str /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BD470 -> 0x1BD624
        class ReadBuf * rb; // r21
        unsigned char * ps0; // r20
        signed int s1; // r19
        unsigned char * pd0; // r29+0xAC
        unsigned char * pd1; // r29+0xA8
        signed int d0; // r29+0xA4
        signed int d1; // r29+0xA0
        signed int len; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD630 -> 0x001BD81C
*/
// Range: 0x1BD630 -> 0x1BD81C
signed int videoCallback(class sceMpegCbDataStr * str /* r29+0xAC */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BD630 -> 0x1BD81C
        class ReadBuf * rb; // r22
        signed int s0; // r21
        signed int s1; // r20
        unsigned char * pd0; // r29+0xBC
        unsigned char * pd1; // r29+0xB8
        unsigned char * pd0Unc; // r19
        unsigned char * pd1Unc; // r23
        signed int d0; // r29+0xB4
        signed int d1; // r29+0xB0
    }
}

