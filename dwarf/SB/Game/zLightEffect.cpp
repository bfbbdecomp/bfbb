/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class iLight {
    // total size: 0x3C
public:
    unsigned int type; // offset 0x0, size 0x4
    class RpLight * hw; // offset 0x4, size 0x4
    class xSphere sph; // offset 0x8, size 0x10
    float radius_sq; // offset 0x18, size 0x4
    class _xFColor color; // offset 0x1C, size 0x10
    class xVec3 dir; // offset 0x2C, size 0xC
    float coneangle; // offset 0x38, size 0x4
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
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class RpLight {
    // total size: 0x40
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
class _zLight : public xBase {
    // total size: 0x64
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zLightAsset * tasset; // offset 0x14, size 0x4
    class iLight light; // offset 0x18, size 0x3C
    class xBase * attached_to; // offset 0x54, size 0x4
    signed int true_idx; // offset 0x58, size 0x4
    float * reg; // offset 0x5C, size 0x4
    signed int effect_idx; // offset 0x60, size 0x4
};
class _xFColor {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
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
class zLightAsset : public xBaseAsset {
    // total size: 0x44
public:
    unsigned char lightType; // offset 0x8, size 0x1
    unsigned char lightEffect; // offset 0x9, size 0x1
    unsigned char lightPad[2]; // offset 0xA, size 0x2
    unsigned int lightFlags; // offset 0xC, size 0x4
    float lightColor[4]; // offset 0x10, size 0x10
    class xVec3 lightDir; // offset 0x20, size 0xC
    float lightConeAngle; // offset 0x2C, size 0x4
    class xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180E10 -> 0x00181090
*/
// Range: 0x180E10 -> 0x181090
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x180E10 -> 0x181090
        class iLight * l; // r17
        float * reg; // r16
        float amount; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181090 -> 0x001810A0
*/
// Range: 0x181090 -> 0x1810A0
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181090 -> 0x1810A0
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810A0 -> 0x001810A8
*/
// Range: 0x1810A0 -> 0x1810A8
void zLightEffectRandomColFast() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810A0 -> 0x1810A8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810B0 -> 0x001810B8
*/
// Range: 0x1810B0 -> 0x1810B8
void zLightEffectRandomCol() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810B0 -> 0x1810B8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810C0 -> 0x001810C8
*/
// Range: 0x1810C0 -> 0x1810C8
void zLightEffectRandomColSlow() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810C0 -> 0x1810C8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810D0 -> 0x001810D8
*/
// Range: 0x1810D0 -> 0x1810D8
void zLightEffectHalfDimFast() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810D0 -> 0x1810D8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810E0 -> 0x001810E8
*/
// Range: 0x1810E0 -> 0x1810E8
void zLightEffectHalfDim() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810E0 -> 0x1810E8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810F0 -> 0x001810F8
*/
// Range: 0x1810F0 -> 0x1810F8
void zLightEffectHalfDimSlow() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1810F0 -> 0x1810F8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181100 -> 0x00181108
*/
// Range: 0x181100 -> 0x181108
void zLightEffectDimFast() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181100 -> 0x181108
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181110 -> 0x00181118
*/
// Range: 0x181110 -> 0x181118
void zLightEffectDim() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181110 -> 0x181118
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181120 -> 0x00181128
*/
// Range: 0x181120 -> 0x181128
void zLightEffectDimSlow() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181120 -> 0x181128
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181130 -> 0x00181138
*/
// Range: 0x181130 -> 0x181138
void zLightEffectStrobeFast() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181130 -> 0x181138
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181140 -> 0x00181148
*/
// Range: 0x181140 -> 0x181148
void zLightEffectStrobe() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181140 -> 0x181148
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181150 -> 0x00181158
*/
// Range: 0x181150 -> 0x181158
void zLightEffectStrobeSlow() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181150 -> 0x181158
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181160 -> 0x0018117C
*/
// Range: 0x181160 -> 0x18117C
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181160 -> 0x18117C
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181180 -> 0x001811A4
*/
// Range: 0x181180 -> 0x1811A4
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181180 -> 0x1811A4
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811B0 -> 0x001811D4
*/
// Range: 0x1811B0 -> 0x1811D4
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1811B0 -> 0x1811D4
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811E0 -> 0x001814D8
*/
// Range: 0x1811E0 -> 0x1814D8
static void EffectFlicker(class _zLight * zlight /* r18 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1811E0 -> 0x1814D8
        class iLight * l; // r17
        float * reg; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001814E0 -> 0x001814F0
*/
// Range: 0x1814E0 -> 0x1814F0
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1814E0 -> 0x1814F0
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001814F0 -> 0x001814F8
*/
// Range: 0x1814F0 -> 0x1814F8
void zLightEffectInitRandomCol() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1814F0 -> 0x1814F8
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181500 -> 0x00181508
*/
// Range: 0x181500 -> 0x181508
void zLightEffectInitHalfDim() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181500 -> 0x181508
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181510 -> 0x00181518
*/
// Range: 0x181510 -> 0x181518
void zLightEffectInitDim() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181510 -> 0x181518
    }
}

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181520 -> 0x00181528
*/
// Range: 0x181520 -> 0x181528
void zLightEffectInitStrobe() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x181520 -> 0x181528
    }
}

