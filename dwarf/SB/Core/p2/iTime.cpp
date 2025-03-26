/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x50F880
signed long tim0_high; // size: 0x4, address: 0x50F888
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x50F890
unsigned int pil; // size: 0x4, address: 0x50F894
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x50F898
unsigned int kernel_hits; // size: 0x4, address: 0x50F89C
unsigned int vsync_hits; // size: 0x4, address: 0x50F8A0
unsigned int scene_id; // size: 0x4, address: 0x50E808
unsigned int prof_enable; // size: 0x4, address: 0x50F8A4
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x50F8A8
static unsigned int * profSampleStatic; // size: 0x4, address: 0x50F8AC
static unsigned int profSampleSize; // size: 0x4, address: 0x50F8B0
static float sGameTime; // size: 0x4, address: 0x50F8B4
signed int TimerHandler(signed int, void *, void *); // size: 0x0, address: 0x1BB010
class prof_info {
    // total size: 0xC
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAE40 -> 0x001BAE48
*/
// Range: 0x1BAE40 -> 0x1BAE48
void iFuncProfileDump() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAE40 -> 0x1BAE48
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAE50 -> 0x001BAE58
*/
// Range: 0x1BAE50 -> 0x1BAE58
void iFuncProfileParse() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAE50 -> 0x1BAE58
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAE60 -> 0x001BAF0C
*/
// Range: 0x1BAE60 -> 0x1BAF0C
void iProfileClear(unsigned int sceneID /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAE60 -> 0x1BAF0C
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAF10 -> 0x001BAF18
*/
// Range: 0x1BAF10 -> 0x1BAF18
void iTimeSetGame(float time /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAF10 -> 0x1BAF18
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAF20 -> 0x001BAF30
*/
// Range: 0x1BAF20 -> 0x1BAF30
void iTimeGameAdvance(float elapsed /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAF20 -> 0x1BAF30
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAF30 -> 0x001BAF7C
*/
// Range: 0x1BAF30 -> 0x1BAF7C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAF30 -> 0x1BAF7C
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAF80 -> 0x001BAFC8
*/
// Range: 0x1BAF80 -> 0x1BAFC8
float iTimeDiffSec(signed long time /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAF80 -> 0x1BAFC8
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BAFD0 -> 0x001BB008
*/
// Range: 0x1BAFD0 -> 0x1BB008
signed long iTimeGet() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BAFD0 -> 0x1BB008
        signed long high0; // r5
        signed long low0; // r2
        signed long high1; // r4
        signed long low1; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB010 -> 0x001BB068
*/
// Range: 0x1BB010 -> 0x1BB068
static signed int TimerHandler(signed int ca /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BB010 -> 0x1BB068
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB070 -> 0x001BB098
*/
// Range: 0x1BB070 -> 0x1BB098
void iTimeExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BB070 -> 0x1BB098
    }
}

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB0A0 -> 0x001BB100
*/
// Range: 0x1BB0A0 -> 0x1BB100
void iTimeInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BB0A0 -> 0x1BB100
    }
}

