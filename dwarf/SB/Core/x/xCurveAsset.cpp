/*
    Compile unit: C:\SB\Core\x\xCurveAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xCurveAsset {
    // total size: 0x14
public:
    enum xCurveType type; // offset 0x0, size 0x4
    enum xCurveClamp clamp; // offset 0x4, size 0x4
    float delta; // offset 0x8, size 0x4
    signed int numPoints; // offset 0xC, size 0x4
    float * points; // offset 0x10, size 0x4
};
enum xCurveType {
    xCVT_BAKED = 0,
};
enum xCurveClamp {
    xCC_CONSTANT = 0,
    xCC_CYCLE = 1,
    xCC_OSCILLATE = 2,
};

/*
    Compile unit: C:\SB\Core\x\xCurveAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ADE50 -> 0x003AE01C
*/
// Range: 0x3ADE50 -> 0x3AE01C
float xCurveAssetEvaluate(class xCurveAsset * curve_asset /* r16 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3ADE50 -> 0x3AE01C
        float max_t; // r1
        float curve_length; // r21
        signed int curve_shift; // r5
        unsigned int last_point; // r4
        float u; // r3
    }
}

