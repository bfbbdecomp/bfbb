/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char _0_buf[2048]; // size: 0x800, address: 0x53F0C0
class xSndGlobals gSnd; // size: 0x13A0, address: 0x5B7800
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum sound_category {
    SND_CAT_INVALID = -1,
    SND_CAT_GAME = 0,
    SND_CAT_DIALOG = 1,
    SND_CAT_MUSIC = 2,
    SND_CAT_CUTSCENE = 3,
    SND_CAT_UI = 4,
    SND_CAT_NUM_CATEGORIES = 5,
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
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class iSndInfo {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    unsigned int pitch; // offset 0x8, size 0x4
    signed int lastStreamBuffer; // offset 0xC, size 0x4
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
enum sound_listener_game_mode {
    SND_LISTENER_MODE_PLAYER = 0,
    SND_LISTENER_MODE_CAMERA = 1,
};
class xSndVoiceInfo {
    // total size: 0x64
public:
    unsigned int assetID; // offset 0x0, size 0x4
    unsigned int sndID; // offset 0x4, size 0x4
    unsigned int parentID; // offset 0x8, size 0x4
    class xVec3 * parentPos; // offset 0xC, size 0x4
    signed int internalID; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    unsigned short pad; // offset 0x18, size 0x2
    unsigned short priority; // offset 0x1A, size 0x2
    float vol; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    unsigned int sample_rate; // offset 0x24, size 0x4
    unsigned int deadct; // offset 0x28, size 0x4
    enum sound_category category; // offset 0x2C, size 0x4
    class xVec3 actualPos; // offset 0x30, size 0xC
    class xVec3 playPos; // offset 0x3C, size 0xC
    float innerRadius2; // offset 0x48, size 0x4
    float outerRadius2; // offset 0x4C, size 0x4
    unsigned int lock_owner; // offset 0x50, size 0x4
    class iSndInfo ps; // offset 0x54, size 0x10
};
class sceSifDmaData {
    // total size: 0x10
public:
    unsigned int data; // offset 0x0, size 0x4
    unsigned int addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int mode; // offset 0xC, size 0x4
};
class SpuStreamBody {
    // total size: 0x8
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
};
class iSndVol {
    // total size: 0x4
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
class xSndGlobals {
    // total size: 0x13A0
public:
    unsigned int stereo; // offset 0x0, size 0x4
    unsigned int SndCount; // offset 0x4, size 0x4
    float categoryVolFader[5]; // offset 0x8, size 0x14
    class xSndVoiceInfo voice[48]; // offset 0x1C, size 0x12C0
    class xMat4x3 listenerMat[2]; // offset 0x12E0, size 0x80
    enum sound_listener_game_mode listenerMode; // offset 0x1360, size 0x4
    unsigned int suspendCD; // offset 0x1364, size 0x4
    class xVec3 right; // offset 0x1368, size 0xC
    class xVec3 up; // offset 0x1374, size 0xC
    class xVec3 at; // offset 0x1380, size 0xC
    class xVec3 pos; // offset 0x138C, size 0xC
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB9E0 -> 0x001BBD10
*/
// Range: 0x1BB9E0 -> 0x1BBD10
static signed int sendToIOP2area(signed int pd0 /* r21 */, signed int d0 /* r20 */, signed int pd1 /* r23 */, signed int d1 /* r2 */, unsigned char * ps0 /* r19 */, signed int s0 /* r18 */, unsigned char * ps1 /* r22 */, signed int s1 /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BB9E0 -> 0x1BBD10
        signed int diff; // r3
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBD10 -> 0x001BBF08
*/
// Range: 0x1BBD10 -> 0x1BBF08
signed int audioDecSendToIOP(class AudioDec * ad /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BBD10 -> 0x1BBF08
        signed int pd0; // r2
        signed int pd1; // r2
        signed int d0; // r2
        signed int d1; // r2
        unsigned char * ps0; // r2
        signed int s1; // r2
        signed int count_sent; // r17
        signed int countAdj; // r3
        signed int pos; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBF10 -> 0x001BBF24
*/
// Range: 0x1BBF10 -> 0x1BBF24
signed int audioDecIsPreset(class AudioDec * ad /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BBF10 -> 0x1BBF24
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBF30 -> 0x001BBFBC
*/
// Range: 0x1BBF30 -> 0x1BBFBC
void audioDecEndPut(class AudioDec * ad /* r2 */, signed int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BBF30 -> 0x1BBFBC
        signed int hdr_add; // r6
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBFC0 -> 0x001BC080
*/
// Range: 0x1BBFC0 -> 0x1BC080
void audioDecBeginPut(class AudioDec * ad /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BBFC0 -> 0x1BC080
        signed int len; // r11
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC080 -> 0x001BC124
*/
// Range: 0x1BC080 -> 0x1BC124
void audioDecReset(class AudioDec * ad /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC080 -> 0x1BC124
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC130 -> 0x001BC1A0
*/
// Range: 0x1BC130 -> 0x1BC1A0
void audioDecStart(class AudioDec * ad /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC130 -> 0x1BC1A0
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC1A0 -> 0x001BC1E0
*/
// Range: 0x1BC1A0 -> 0x1BC1E0
signed int audioDecDelete(class AudioDec * ad /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC1A0 -> 0x1BC1E0
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC1E0 -> 0x001BC38C
*/
// Range: 0x1BC1E0 -> 0x1BC38C
signed int audioDecCreate(class AudioDec * ad /* r17 */, unsigned char * buff /* r2 */, signed int buffSize /* r2 */, signed int iopBuffSize /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BC1E0 -> 0x1BC38C
    }
}

