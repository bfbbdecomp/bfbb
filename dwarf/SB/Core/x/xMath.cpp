/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int xmath_inited; // size: 0x4, address: 0x50FA38
static signed int xmath_exited; // size: 0x4, address: 0x50FA3C
static unsigned int rndseed; // size: 0x4, address: 0x50FA40
float cosSinPolynomial[]; // size: 0x0, address: 0x416DE0
class xFuncPiece {
    // total size: 0x20
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED190 -> 0x001ED2AC
*/
// Range: 0x1ED190 -> 0x1ED2AC
void xFuncPiece_ShiftPiece(class xFuncPiece * shift /* r2 */, class xFuncPiece * func /* r2 */, float newZero /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED190 -> 0x1ED2AC
        signed int i; // r8
        signed int j; // r10
        class xFuncPiece temp; // r29
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED2B0 -> 0x001ED2EC
*/
// Range: 0x1ED2B0 -> 0x1ED2EC
void xFuncPiece_EndPoints(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED2B0 -> 0x1ED2EC
        float xfinv; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED2F0 -> 0x001ED398
*/
// Range: 0x1ED2F0 -> 0x1ED398
float xFuncPiece_Eval(class xFuncPiece * func /* r2 */, float param /* r29 */, class xFuncPiece * * iterator /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED2F0 -> 0x1ED398
        float result; // r29
        signed int i; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED3A0 -> 0x001ED4F0
*/
// Range: 0x1ED3A0 -> 0x1ED4F0
void xAccelStop(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x4 */, float dt /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED3A0 -> 0x1ED4F0
        unsigned int aa; // r29+0xC
        float oldv; // r29+0x8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED4F0 -> 0x001ED628
*/
// Range: 0x1ED4F0 -> 0x1ED628
void xAccelMove(float & x /* r2 */, float & v /* r2 */, float a /* r29 */, float dt /* r29+0x10 */, float maxv /* r29+0x4 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED4F0 -> 0x1ED628
        unsigned int bn; // r10
        unsigned int bp; // r7
        unsigned int aa; // r29+0xC
        unsigned int bn; // r8
        unsigned int bp; // r6
        unsigned int aa; // r29+0x8
        float diff; // r5
        float dv; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED630 -> 0x001ED6A8
*/
// Range: 0x1ED630 -> 0x1ED6A8
float xAccelMoveTime(float dx /* r29 */, float a /* r29 */, float maxv /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED630 -> 0x1ED6A8
        float time; // r1
        float atime; // r1
        float adist; // r29
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED6B0 -> 0x001ED998
*/
// Range: 0x1ED6B0 -> 0x1ED998
void xAccelMove(float & x /* r17 */, float & v /* r16 */, float a /* r24 */, float dt /* r23 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED6B0 -> 0x1ED998
        float offset; // r29+0x5C
        float t1; // r22
        float t2; // r21
        float oldv; // r20
        float dv; // r29+0x58
        float newv; // r29+0x54
        float adx; // r1
        float diff; // r1
        float dx; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED9A0 -> 0x001EDA24
*/
// Range: 0x1ED9A0 -> 0x1EDA24
float xDangleClamp(float a /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ED9A0 -> 0x1EDA24
        float b; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDA30 -> 0x001EDA80
*/
// Range: 0x1EDA30 -> 0x1EDA80
float xAngleClampFast(float a /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDA30 -> 0x1EDA80
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDA80 -> 0x001EDACC
*/
// Range: 0x1EDA80 -> 0x1EDACC
float xAngleClamp(float a /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDA80 -> 0x1EDACC
        float b; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDAD0 -> 0x001EDE74
*/
// Range: 0x1EDAD0 -> 0x1EDE74
unsigned int xMathSolveCubic(float a /* r29+0x50 */, float b /* r29+0x50 */, float c /* r29+0x50 */, float d /* r29+0x50 */, float * x1 /* r18 */, float * x2 /* r17 */, float * x3 /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDAD0 -> 0x1EDE74
        float arecip; // r29+0x50
        float fA; // r4
        float fB; // r3
        float fOffset; // r22
        float fDiscr; // r20
        float fHalfB; // r21
        float fTemp; // r29+0x50
        float fDist; // r20
        float fAngle; // r21
        float fCos; // r21
        float fSin; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDE80 -> 0x001EDF88
*/
// Range: 0x1EDE80 -> 0x1EDF88
unsigned int xMathSolveQuadratic(float a /* r29 */, float b /* r29 */, float c /* r29 */, float * x1 /* r2 */, float * x2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDE80 -> 0x1EDF88
        float d; // r4
        float dx; // r1
        float p; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDF90 -> 0x001EDFE8
*/
// Range: 0x1EDF90 -> 0x1EDFE8
float xurand() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDF90 -> 0x1EDFE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDFF0 -> 0x001EE010
*/
// Range: 0x1EDFF0 -> 0x1EE010
unsigned int xrand() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EDFF0 -> 0x1EE010
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE010 -> 0x001EE018
*/
// Range: 0x1EE010 -> 0x1EE018
void xsrand(unsigned int seed /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE010 -> 0x1EE018
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE020 -> 0x001EE028
*/
// Range: 0x1EE020 -> 0x1EE028
float xatof(char * x /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE020 -> 0x1EE028
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE030 -> 0x001EE048
*/
// Range: 0x1EE030 -> 0x1EE048
void xMathExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE030 -> 0x1EE048
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE050 -> 0x001EE070
*/
// Range: 0x1EE050 -> 0x1EE070
void xMathInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE050 -> 0x1EE070
    }
}

