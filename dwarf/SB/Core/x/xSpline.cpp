/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x418D10
static float sBasisHermite[4][4]; // size: 0x40, address: 0x418D50
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xSpline3 {
    // total size: 0x2C
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AB00 -> 0x0020AC44
*/
// Range: 0x20AB00 -> 0x20AC44
class xSpline3 * xSpline3_Bezier(class xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class xVec3 * p1 /* r18 */, class xVec3 * p2 /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20AB00 -> 0x20AC44
        class xSpline3 * spl; // r16
        unsigned int i; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AC50 -> 0x0020AD9C
*/
// Range: 0x20AC50 -> 0x20AD9C
static class xSpline3 * AllocSpline3(class xVec3 * points /* r21 */, float * time /* r20 */, unsigned int numpoints /* r19 */, unsigned int numalloc /* r18 */, unsigned int flags /* r17 */, unsigned int type /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20AC50 -> 0x20AD9C
        class xSpline3 * spl; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ADA0 -> 0x0020AF4C
*/
// Range: 0x20ADA0 -> 0x20AF4C
void xSpline3_ArcInit(class xSpline3 * spl /* r17 */, unsigned int sample /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ADA0 -> 0x20AF4C
        unsigned int i; // r21
        unsigned int seg; // r20
        float len; // r21
        float arcsum; // r20
        class xCoef3 tempCoef; // r29+0x80
        class xCoef3 * coef; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AF50 -> 0x0020AF98
*/
// Range: 0x20AF50 -> 0x20AF98
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20AF50 -> 0x20AF98
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AFA0 -> 0x0020B2E8
*/
// Range: 0x20AFA0 -> 0x20B2E8
static float ArcEvalIterate(class xSpline3 * spl /* r2 */, float s /* r22 */, unsigned int deriv /* r19 */, class xVec3 * o /* r18 */, unsigned int iterations /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20AFA0 -> 0x20B2E8
        class xCoef3 * coef; // r20
        class xCoef3 tempCoef; // r29+0x80
        float umin; // r21
        float umax; // r20
        float smin; // r25
        float smax; // r24
        float utest; // r23
        float arctest; // r29+0xB0
        signed int min; // r8
        signed int max; // r2
        signed int test; // r7
        signed int seg; // r16
        signed int segmul; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B2F0 -> 0x0020B654
*/
// Range: 0x20B2F0 -> 0x20B654
void xSpline3_EvalSeg(class xSpline3 * spl /* r18 */, float u /* r20 */, unsigned int deriv /* r17 */, class xVec3 * o /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20B2F0 -> 0x20B654
        class xCoef3 tempCoef; // r29+0x50
        unsigned int seg; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B660 -> 0x0020BABC
*/
// Range: 0x20B660 -> 0x20BABC
static class xCoef3 * CoefSeg3(class xSpline3 * spl /* r19 */, unsigned int seg /* r18 */, class xCoef3 * tempCoef /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20B660 -> 0x20BABC
        float N[7][4]; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BAC0 -> 0x0020BCB0
*/
// Range: 0x20BAC0 -> 0x20BCB0
static void EvalBspline3(class xSpline3 * spl /* r19 */, float u /* r29+0x100 */, unsigned int deriv /* r18 */, class xVec3 * o /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20BAC0 -> 0x20BCB0
        float N[7][4]; // r29+0x90
        class xCoef3 coef; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BCB0 -> 0x0020BEB4
*/
// Range: 0x20BCB0 -> 0x20BEB4
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20BCB0 -> 0x20BEB4
        unsigned int i; // r17
        unsigned int k; // r16
        unsigned int c; // r25
        float d1; // r8
        float d2; // r7
        float Ntemp[4]; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BEC0 -> 0x0020C0A8
*/
// Range: 0x20BEC0 -> 0x20C0A8
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20BEC0 -> 0x20C0A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C0B0 -> 0x0020C284
*/
// Range: 0x20C0B0 -> 0x20C284
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r29 */, float uend /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C0B0 -> 0x20C284
        unsigned int i; // r4
        float A; // r7
        float B; // r6
        float C; // r5
        float D; // r4
        float E; // r3
        float h; // r2
        float sum; // r1
        float u; // r10
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C290 -> 0x0020C4AC
*/
// Range: 0x20C290 -> 0x20C4AC
static void Interpolate_Bspline(class xVec3 * data /* r22 */, class xVec3 * control /* r21 */, float * knots /* r23 */, unsigned int nodata /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C290 -> 0x20C4AC
        unsigned int i; // r8
        float * alpha; // r19
        float * beta; // r18
        float * gamma; // r17
        float t1; // r29+0x90
        float t2; // r7
        float t3; // r4
        float t4; // r6
        float t5; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C4B0 -> 0x0020C748
*/
// Range: 0x20C4B0 -> 0x20C748
static void Tridiag_Solve(float * a /* r23 */, float * b /* r22 */, float * c /* r21 */, class xVec3 * d /* r20 */, class xVec3 * x /* r19 */, signed int n /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20C4B0 -> 0x20C748
        signed int j; // r11
        float beta; // r3
        float * gamma; // r17
        class xVec3 * delta; // r16
    }
}

