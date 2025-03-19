/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _tagxRumble mRumbleList[32]; // size: 0x200, address: 0x568C70
class _tagxPad mPad[4]; // size: 0x520, address: 0x568E70
class _tagxPad * gDebugPad; // size: 0x4, address: 0x50FA68
class _tagxPad * gPlayerPad; // size: 0x4, address: 0x50FA6C
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
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
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
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3400 -> 0x001F35C0
*/
// Range: 0x1F3400 -> 0x1F35C0
signed int xPadAddRumble(signed int idx /* r2 */, enum _tagRumbleType type /* r21 */, float time /* r20 */, signed int replace /* r2 */, unsigned int fxflags /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3400 -> 0x1F35C0
        signed int appended; // r19
        class _tagxPad * pad; // r18
        class _tagxRumble * r; // r3
        class _tagxRumble * last_r; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F35C0 -> 0x001F3648
*/
// Range: 0x1F35C0 -> 0x1F3648
void xPadDestroyRumbleChain(signed int idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F35C0 -> 0x1F3648
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3650 -> 0x001F3658
*/
// Range: 0x1F3650 -> 0x1F3658
void xPadKill() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3650 -> 0x1F3658
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3660 -> 0x001F3910
*/
// Range: 0x1F3660 -> 0x1F3910
void xPadNormalizeAnalog(class _tagxPad & pad /* r2 */, signed int inner_zone /* r22 */, signed int outer_zone /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3660 -> 0x1F3910
        class _tagPadAnalog * src; // r20
        signed int i; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3910 -> 0x001F3F98
*/
// Range: 0x1F3910 -> 0x1F3F98
signed int xPadUpdate(signed int idx /* r16 */, float time_passed /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3910 -> 0x1F3F98
        unsigned int new_on; // r29+0x4C
        class _tagxPad * p; // r16
        class _tagxRumble * r; // r17
        signed int ret; // r2
        unsigned int fake_dpad; // r4
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3FA0 -> 0x001F4074
*/
// Range: 0x1F3FA0 -> 0x1F4074
void xPadRumbleEnable(signed int idx /* r2 */, signed int enable /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F3FA0 -> 0x1F4074
        class _tagxPad * p; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4080 -> 0x001F4190
*/
// Range: 0x1F4080 -> 0x1F4190
class _tagxPad * xPadEnable(signed int idx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4080 -> 0x1F4190
        class _tagxPad * p; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4190 -> 0x001F41F4
*/
// Range: 0x1F4190 -> 0x1F41F4
signed int xPadInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4190 -> 0x1F41F4
    }
}

