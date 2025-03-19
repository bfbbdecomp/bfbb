/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char mReadData[32]; // size: 0x20, address: 0x533100
static __int128 mPadDmaBuffer[4][16]; // size: 0x400, address: 0x533140
static unsigned char mActDirect[6]; // size: 0x6, address: 0x50F828
static unsigned char mActAlign[6]; // size: 0x6, address: 0x50F830
static float mLargeMotor[4]; // size: 0x10, address: 0x533540
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x5BA970
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
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class _tagiTRCPadInfo {
    // total size: 0x4
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskNotIdentified = 5,
    TRC_DiskIdentified = 6,
    TRC_DiskTrayOpen = 7,
    TRC_DiskTrayClosed = 8,
    TRC_DiskNoDisk = 9,
    TRC_DiskInvalid = 10,
    TRC_DiskRetry = 11,
    TRC_DiskFatal = 12,
    TRC_Total = 13,
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagPadInit {
    ePadInit_Open1 = 0,
    ePadInit_WaitStable2 = 1,
    ePadInit_EnableAnalog3 = 2,
    ePadInit_EnableAnalog3LetsAllPissOffChris = 3,
    ePadInit_EnableRumble4 = 4,
    ePadInit_EnableRumbleTest5 = 5,
    ePadInit_PressureS6 = 6,
    ePadInit_PressureSTest7 = 7,
    ePadInit_Complete8a = 8,
    ePadInit_Complete8b = 9,
    ePadInit_Finished9 = 10,
};
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // total size: 0xC
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0070 -> 0x001B0078
*/
// Range: 0x1B0070 -> 0x1B0078
void iPadKill() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0070 -> 0x1B0078
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0080 -> 0x001B019C
*/
// Range: 0x1B0080 -> 0x1B019C
void iPadStartRumble(class _tagxPad * pad /* r2 */, class _tagxRumble * rumble /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0080 -> 0x1B019C
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B01A0 -> 0x001B01BC
*/
// Range: 0x1B01A0 -> 0x1B01BC
void iPadStopRumble(class _tagxPad * pad /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B01A0 -> 0x1B01BC
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B01C0 -> 0x001B026C
*/
// Range: 0x1B01C0 -> 0x1B026C
void iPadRumbleFx(class _tagxPad * p /* r2 */, class _tagxRumble * r /* r2 */, float time_passed /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B01C0 -> 0x1B026C
        float act; // r2
        float scale; // r1
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0270 -> 0x001B05D4
*/
// Range: 0x1B0270 -> 0x1B05D4
signed int iPadUpdate(class _tagxPad * pad /* r17 */, unsigned int * on /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0270 -> 0x1B05D4
        signed int temp; // r2
        unsigned int temp_on; // r2
        signed int result; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B05E0 -> 0x001B070C
*/
// Range: 0x1B05E0 -> 0x1B070C
static void iPadTRCUpdate(class _tagxPad * pad /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B05E0 -> 0x1B070C
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0710 -> 0x001B077C
*/
// Range: 0x1B0710 -> 0x1B077C
class _tagxPad * iPadEnable(class _tagxPad * pad /* r16 */, signed short port /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0710 -> 0x1B077C
        enum _tagPadInit pad_init; // r29+0x2C
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0780 -> 0x001B0B08
*/
// Range: 0x1B0780 -> 0x1B0B08
class _tagxPad * iPadEnableGuts(class _tagxPad * pad /* r17 */, enum _tagPadInit * pad_init /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0780 -> 0x1B0B08
        signed int state; // r2
        signed int id; // r18
        signed int exid; // r2
        signed int state3; // r2
        signed int state3; // r2
        signed int state5; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0B10 -> 0x001B0B54
*/
// Range: 0x1B0B10 -> 0x1B0B54
signed int iPadInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B0B10 -> 0x1B0B54
    }
}

