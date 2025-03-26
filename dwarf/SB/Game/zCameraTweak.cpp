/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int sCamTweakCount; // size: 0x4, address: 0x510284
static class zCamTweak sCamTweakList[8]; // size: 0xA0, address: 0x5E6560
static float sCamTweakLerp; // size: 0x4, address: 0x510288
static float sCamTweakTime; // size: 0x4, address: 0x51028C
static float sCamTweakPitch[2]; // size: 0x8, address: 0x510290
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x510298
static float sCamTweakPitchCur; // size: 0x4, address: 0x5102A0
static float sCamTweakDistMultCur; // size: 0x4, address: 0x5102A4
static float sCamD; // size: 0x4, address: 0x5102A8
static float sCamH; // size: 0x4, address: 0x5102AC
static float sCamPitch; // size: 0x4, address: 0x5102B0
static class zCamTweakLook zcam_neartweak; // size: 0xC, address: 0x5E6600
static class zCamTweakLook zcam_fartweak; // size: 0xC, address: 0x5E6610
signed int zCameraTweak_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x3B33B0
signed int zcam_near; // size: 0x4, address: 0x50F234
float zcam_far_d; // size: 0x4, address: 0x50E5A4
float zcam_far_h; // size: 0x4, address: 0x50E5A8
float zcam_far_pitch; // size: 0x4, address: 0x50E5AC
float zcam_near_d; // size: 0x4, address: 0x50E598
float zcam_near_h; // size: 0x4, address: 0x50E59C
float zcam_near_pitch; // size: 0x4, address: 0x50E5A0
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class zCameraTweak : public xBase {
    // total size: 0x14
public:
    class CameraTweak_asset * casset; // offset 0x10, size 0x4
};
class CameraTweak_asset : public xDynAsset {
    // total size: 0x20
public:
    signed int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class zCamTweak {
    // total size: 0x14
public:
    unsigned int owner; // offset 0x0, size 0x4
    float priority; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
    float pitch; // offset 0xC, size 0x4
    float distMult; // offset 0x10, size 0x4
};
class zCamTweakLook {
    // total size: 0xC
public:
    float h; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
};
class xSerial {
    // total size: 0x0
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B33B0 -> 0x003B3468
*/
// Range: 0x3B33B0 -> 0x3B3468
signed int zCameraTweak_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B33B0 -> 0x3B3468
        class zCameraTweak * tweak; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3470 -> 0x003B3478
*/
// Range: 0x3B3470 -> 0x3B3478
void zCameraTweak_Load(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3470 -> 0x3B3478
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3480 -> 0x003B3488
*/
// Range: 0x3B3480 -> 0x3B3488
void zCameraTweak_Save(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3480 -> 0x3B3488
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3490 -> 0x003B34EC
*/
// Range: 0x3B3490 -> 0x3B34EC
void zCameraTweak_Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3490 -> 0x3B34EC
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B34F0 -> 0x003B34F8
*/
// Range: 0x3B34F0 -> 0x3B34F8
float zCameraTweakGlobal_GetPitch() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B34F0 -> 0x3B34F8
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3500 -> 0x003B3508
*/
// Range: 0x3B3500 -> 0x3B3508
float zCameraTweakGlobal_GetH() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3500 -> 0x3B3508
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3510 -> 0x003B3518
*/
// Range: 0x3B3510 -> 0x3B3518
float zCameraTweakGlobal_GetD() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3510 -> 0x3B3518
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3520 -> 0x003B3614
*/
// Range: 0x3B3520 -> 0x3B3614
void zCameraTweakGlobal_Update(float dt /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3520 -> 0x3B3614
        class zCamTweakLook * tlook; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3620 -> 0x003B3654
*/
// Range: 0x3B3620 -> 0x3B3654
void zCameraTweakGlobal_Reset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3620 -> 0x3B3654
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3660 -> 0x003B3788
*/
// Range: 0x3B3660 -> 0x3B3788
void zCameraTweakGlobal_Remove(unsigned int owner /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3660 -> 0x3B3788
        signed int i; // r7
        signed int j; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3790 -> 0x003B39A8
*/
// Range: 0x3B3790 -> 0x3B39A8
void zCameraTweakGlobal_Add(unsigned int owner /* r2 */, float priority /* r29 */, float time /* r29 */, float pitch /* r29 */, float distMult /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B3790 -> 0x3B39A8
        signed int i; // r6
        signed int j; // r8
    }
}

/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B39B0 -> 0x003B3AA0
*/
// Range: 0x3B39B0 -> 0x3B3AA0
void zCameraTweakGlobal_Init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3B39B0 -> 0x3B3AA0
    }
}

